#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll extendedgcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    ll x1, y1;
    ll g = extendedgcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1; 

    return g;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    while (cin >> n) {
        if (n == 0) break;

        ll c1, n1, c2, n2;
        cin >> c1 >> n1;
        cin >> c2 >> n2;

        ll x, y;
        ll g = extendedgcd(n1, n2, x, y);

        if (n % g != 0) {
            cout << "failed" << endl;
            continue;
        }

        // Scale x and y
        x *= (n / g);
        y *= (n / g);

        // Compute the valid range of k
        ll k1 = ceil(-1.0 * x * (g / n2));
        ll k2 = floor(y * (g / n1));

        if (k1 > k2) {
            cout << "failed" << endl;
            continue;
        }

        // Finding the best k that minimizes cost
        ll x1 = x + k1 * (n2 / g);
        ll y1 = y - k1 * (n1 / g);
        ll x2 = x + k2 * (n2 / g);
        ll y2 = y - k2 * (n1 / g);

        ll cost1 = c1 * x1 + c2 * y1;
        ll cost2 = c1 * x2 + c2 * y2;

        if (cost1 < cost2)
            cout << x1 << " " << y1 << endl;
        else
            cout << x2 << " " << y2 << endl;
    }

    return 0;
}
