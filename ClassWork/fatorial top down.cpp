/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
vector<int>res(N, -1);
int fact(int n){
    if(res[n]==-1){
        if(n<=1)
        return n;
        else
        res[n]=fact(n-1)*n;
    }
    return res[n];
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    cout<< fact(n)<<endl;
    return 0;
}