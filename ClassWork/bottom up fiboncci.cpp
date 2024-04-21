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
    int n;cin>>n;
      int fibo[n];
      fibo[0]=0;
      fibo[1]=1;

      for(int i=2;i<=n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
      }
      cout<<fibo[n]<<endl;
    return 0;
}