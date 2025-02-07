// link : https://www.spoj.com/problems/CEQU/
//solution : https://www.spoj.com/status/CEQU,israt_123/#

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int extended(int a, int b, int &x, int &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extended(b, a%b, x1, y1);
    x = y1;
    y = x1-(a/b)*y1;
    return d;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t; int i = 1;
    while(t--){
        cout << "Case "<<i++ << ": ";
        int a, b, c; cin >> a >> b >> c;
        int x, y;

        int gcd = extended(a, b, x, y);
        //cout << gcd << endl;
        if(c%gcd==0) cout << "Yes" << endl;
        else
        cout << "No" << endl; 
    }
    return 0;
}
