#include <iostream>

using namespace std;


int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    int result = sum(n);
    
    cout << "Sum of the first " << n << " natural numbers is: " << result << endl;
    
    return 0;
}
