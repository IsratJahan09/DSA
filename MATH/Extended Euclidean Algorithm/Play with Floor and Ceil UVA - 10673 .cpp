// link - https://vjudge.net/problem/UVA-10673
// solution - https://vjudge.net/solution/58141033

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll extended(ll x, ll k, ll &p, ll &q){
    if(k==0){
        p = 1;
        q = 0;
        return x;
    }
    ll x1, y1;

    ll d = extended( k, x%k, x1, y1 );
     p = y1;
    q = x1-(x/k)*y1;

    return d;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;  cin >> n;
    if(n == 0) return 0;
    while(n--){                                         // ax+by = d;  now, --
                                                        // ax+by = gcd(a, b);
                                                        // ax+by = gcd
        ll x, k; cin >> x >> k;                         // ax(d/gcd) + by(d/gcd) = (d/gcd) * gcd
                                                       //x = x*(d/gcd); y = y*(d/gcd);
        ll l = floor((double)x / k);  
        ll C = ceil((double)x/k);
        
       ll p, q; 
       ll gcd = extended(l, C, p, q);
      // cout << gcd << endl;
       if(x%gcd!=0){cout << -1 << endl; continue;}

       p = p*(x/gcd);
       q = q*(x/gcd);

       cout << p << " " << q << endl;

    }
    return 0;
}
