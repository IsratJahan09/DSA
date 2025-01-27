//link - https://codeforces.com/contest/381/problem/A
//solution link - https://codeforces.com/contest/381/submission/297628199

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
    int n; cin >> n;
    vector<int>v;
    int x;
    for(int i = 0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    int l = 0; int r = n-1;
    int sj = 0; int d = 0;
    while(l<=r){
             if(v[l] < v[r]){
                sj += v[r];
                r--;
             }
             else{
                sj+=v[l];
                l++; 
             }
             if(l<=r){
             if(v[l] < v[r]){
                d += v[r];
                r--;
             }
             else{
                d+=v[l];
                l++; 
             }
             }       
    }
    cout << sj << " " << d << endl;
    return 0;
}
