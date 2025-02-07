# 1. Extended Euclidean Algorithm

## Overview
The **Extended Euclidean Algorithm** is an extension of the **Euclidean Algorithm** for computing the greatest common divisor (**GCD**) of two integers. In addition to finding the GCD, it also finds coefficients **x** and **y** such that:


                                               a . x + b . y = gcd(a, b)
                                               exm:  4x+7y=1 
                                           

This property is particularly useful in solving **Diophantine equations** and in applications like **modular inverses** in cryptography.

---
## How It Works
The algorithm is based on the recursive approach:
1. If `b == 0`, then the GCD is `a`, and we set  `x = 1, y = 0`.
2. Otherwise, we recursively compute:
   
                                               gcd(b, a % b)
   
   and update `x` and `y` using:
   
                                               x = y1
                                               y = x1 - (a / b) . y1
   

---
## Implementation
Below is an implementation of the **Extended Euclidean Algorithm** in C++:

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to compute gcd and find x, y such that ax + by = gcd(a, b)
int extendedGCD(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;  // gcd(a, 0) = a
    }
    
    int x1, y1;
    int gcd = extendedGCD(b, a % b, x1, y1);
    
    x = y1;
    y = x1 - (a / b) * y1;           
    
    return gcd;
}

int main() {
    int a, b, x, y;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int gcd = extendedGCD(a, b, x, y);
    
    cout << "GCD(" << a << ", " << b << ") = " << gcd << endl;
    cout << "Coefficients: x = " << x << ", y = " << y << endl;
    
    return 0;
}
```

---
## Example
### **Input:**
```
Enter two numbers: 4 7
```

### **Output:**
```
GCD(4, 7) = 1
Coefficients: x = 2, y = -1
```

### **Explanation:**
For `a = 4`, `b = 7`, the Extended Euclidean Algorithm finds:
```
4(2) + 7(-1) = 8 - 7 = 1
```
Thus, `x = 2` and `y = -1`.

---

## 2. Finding Modular Inverse using EEA
 For modular inverse, we need to find x such that:

                                       𝑎𝑥 ≡ 1 (mod 𝑚)
                                       ax≡1 (mod m)
A modular inverse exists only if:

                                       gcd(a,m)=1
# implementation 
```cpp
ll modInverse(ll a, ll m) {
    ll x, y;
    ll g = extendedgcd(a, m, x, y);
    if (g != 1) return -1; // No inverse exists
    return (x % m + m) % m;
}
```
# Example
```cpp
cout << modInverse(3, 7);  // Output: 5 (since 3 * 5 ≡ 1 mod 7)
```

---
## 3. Solving Linear Diophantine Equations
A Linear Diophantine Equation is of the form:

                                                ax+by=c
Steps to Solve:
Find GCD using EEA. If c is not divisible by gcd(a,b), no solution exists.
Scale the particular solution by 

                                              c/gcd(a,b)
# Implementation
```cpp

bool solveDiophantine(ll a, ll b, ll c, ll &x, ll &y) {
    ll g = extendedgcd(abs(a), abs(b), x, y);
    if (c % g != 0) return false; // No solution

    x *= c / g;
    y *= c / g;
    
    if (a < 0) x = -x;
    if (b < 0) y = -y;
    
    return true;
}
 ```

# Example Usage
```cpp
ll x, y;
if (solveDiophantine(4, 6, 14, x, y))
    cout << x << " " << y;  // Output: 7 -0 (or another valid solution)
else
    cout << "No solution";
```
---
4. Minimum Cost Box Selection (CP Problem)
We need to buy boxes of two types (cost1, size1) and (cost2, size2) to store exactly n marbles at minimum cost.

# Implementation
```cpp
bool minCostBoxSelection(ll n, ll c1, ll n1, ll c2, ll n2) {
    ll x, y;
    ll g = extendedgcd(n1, n2, x, y);
    
    if (n % g != 0) {
        cout << "failed\n";
        return false;
    }

    x *= n / g;
    y *= n / g;

    ll stepX = n2 / g;
    ll stepY = n1 / g;

    ll k1 = ceil(-1.0 * x / stepX);
    ll k2 = floor(y * 1.0 / stepY);

    if (k1 > k2) {
        cout << "failed\n";
        return false;
    }

    ll x1 = x + k1 * stepX, y1 = y - k1 * stepY;
    ll x2 = x + k2 * stepX, y2 = y - k2 * stepY;

    if (c1 * x1 + c2 * y1 < c1 * x2 + c2 * y2)
        cout << x1 << " " << y1 << endl;
    else
        cout << x2 << " " << y2 << endl;

    return true;
}
```
---

## 5. Finding Smallest x in ax ≡ b (mod m)
We solve for x in:

                                                             ax≡b (mod m)
Steps:          

                                                             g=gcd(a,m)
If b is not divisible by g, no solution.
Reduce equation: 

                                                (a/g)x≡(b/g) (mod m/g).
Solve using modular inverse: 
# Implementation
```cpp
ll modLinearEquation(ll a, ll b, ll m) {
    ll x, y;
    ll g = extendedgcd(a, m, x, y);

    if (b % g != 0) return -1; // No solution

    x = (x * (b / g)) % m;
    return (x + m) % m;
}
```
# Example Usage
```cpp

cout << modLinearEquation(4, 8, 12); // Output: -1 (No solution)
```
---
## 6. Chinese Remainder Theorem (CRT)
Given a system of congruences:

                                                x≡a1​ (mod m1​)
                                                x≡a2 (mod m2)

Find x such that it satisfies all equations.

# Implementation
```cpp

ll chineseRemainder(vector<ll> a, vector<ll> m) {
    ll x = 0, M = 1;
    for (ll mi : m) M *= mi;

    for (int i = 0; i < a.size(); i++) {
        ll Mi = M / m[i];
        ll inv = modInverse(Mi, m[i]);
        x = (x + a[i] * Mi * inv) % M;
    }
    
    return (x + M) % M;
}
```
# Example Usage
```cpp
vector<ll> a = {2, 3, 1};
vector<ll> m = {3, 4, 5};
cout << chineseRemainder(a, m);  // Output: 11
```
---
Find the minimum value of x+y 

                                   x` = x+ k*(b/g);
                                   y` = y- k*(a/g);
now, x+y              

                                x`+y` = x+y+k*(b-a)/g;
If a < b , we need to select smallest possible value of  k . If a > b , we need to select the largest possible value of k . If  a = b, all solution will have the same sum x + y .
---

## Applications
- **Finding Modular Inverses** in Cryptography
- **Solving Linear Diophantine Equations**
- **Computing Bézout's Identity**
- **RSA Encryption and Decryption**

---
## License
This project is licensed under the MIT License.

---
## Contributing
Feel free to open issues and submit pull requests for improvements or optimizations!




