//problem link - https://codeforces.com/problemsets/acmsguru/problem/99999/106
//solution link - https://codeforces.com/problemsets/acmsguru/submission/99999/305500358
/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];

ll extended(ll a, ll b, ll &x, ll &y){
    if(b == 0){
        x = 1; y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extended(b, a%b, x1, y1);
    x = y1;
    y = x1-(a/b)*y1;
    return d;
}

ll countSolutions(ll a, ll b, ll c , ll x1, ll x2, ll y1, ll y2){
    c = -c;
    if(c<0){
        c = -c; a = -a; b = -b;
    }
    if(a<0){
        a = -a; 
        swap(x1, x2);
        x1 = -x1;
        x2 = -x2;
    }
    if(b < 0){
     b = -b;
     swap(y1, y2);
     y1 = -y1; y2 = -y2;
    }
    if(a==0 and b == 0){
        return(c==0) ? (x2-x1+1)*(y2-y1+1):0;
    }
    else if(a == 0){
        return (c%b==0 and y1<=(c/b) and c/b <= y2)?(x2-x1+1):0;
    }
    else if(b == 0){
        return (c%a == 0 and x1 <= c/a and c/a <= x2) ? (y2-y1+1) : 0;
    }

    ll x, y;

    ll d = extended(a, b, x, y);
    if(c%d!=0) return 0;
    x = x * (c/d);
    y = y*(c/d);

   if (a < 0) x = -x;
    if (b < 0) y = -y;


   double l1 = ceil((x1-x)*1.0/(b/d));     //x1
   double r1 = floor((x2-x)*1.0/(b/d));     //x2
   double l2 = ceil((y-y2)*1.0/(a/d));     //y2
   double r2 = floor((y-y1)*1.0/(a/d));    //y1

//    if(l1 > r1) swap(l1, r1);
//    if(l2 > r2) swap(l2, r2);

   ll l = max(l1, l2);   //minimum er maximum (x1, y2);
   ll r = min(r1, r2);  // maximum er minimum(x2, y1);

    return max(0LL, r-l+1);

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c; cin >> a >> b >> c;
    ll x1, x2; cin >> x1 >> x2;
    ll y1, y2; cin >> y1 >> y2;


    cout << countSolutions(a, b, c, x1, x2, y1, y2) << endl;
     
    return 0;
}
