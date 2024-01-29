//codeforces problem
/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll  n,m,a;
     cin>>n>>m>>a;
     ll k= ceil(1.0*n/a);
     ll l=ceil(1.0*m/a);
     cout<<l*k<<endl;
      
    return 0;
}
