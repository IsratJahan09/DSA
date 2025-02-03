# Extended Euclidean Algorithm

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




