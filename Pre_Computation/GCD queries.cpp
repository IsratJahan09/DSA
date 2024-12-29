/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=10000005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    while(t--){
        ll n, m; cin >> n >> m;
        int a[n+1];
        int fow[n+1];
        int backw[n+2];
        fow[0] = backw[n+1] = 0;
        for(int i = 1; i<=n; i++){
            cin >> a[i];
    
        }
        for(int i = 1; i<=n; i++){
            fow[i] = __gcd(fow[i-1], a[i]);
        }

        for(int i = n; i>=1; i--){
            backw[i] = __gcd(backw[i+1], a[i]);
        }


        while(m--){
            int l, r; cin >> l >> r;

            cout <<  __gcd(fow[l-1] , backw[r+1]) << endl;
        }

         
    }
    return 0;
}
