/* link - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1045        or 
https://vjudge.net/problem/UVA-10104   */

//solution - https://vjudge.net/solution/58034031


/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll extendedGCD(ll a, ll b, ll &x, ll &y){
     if(b == 0){
        x = 1;
        y = 0;
        return a;
     }

     ll x1, y1;
     ll d = extendedGCD(b, a%b, x1, y1);

     x = y1;
     y = x1 -floor(a/b)*y1;        

     return d;

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b; 
    while(cin >> a >> b){
    ll x , y;
     ll D = extendedGCD(a, b, x, y);

     cout << x << " " << y << " " << D << endl;
    }
     return 0;
}
