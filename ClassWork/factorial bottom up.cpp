/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int fact(int n){
     int fct=1;
    if(n==1 or n==0)
    return fct;
    for(int i=1;i<=n;i++)
    fct*=i;
    return fct;
   
       
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}