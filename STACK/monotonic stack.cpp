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
        int a[n];
        for(int i = 0; i<n;i++){
            cin >> a[i];
        }
        stack<int>s;
        vector<int>ans(n, -1);

        for(int i=n-1; i>=0; i--){
            while(!s.empty() and s.top() <= a[i]){
                s.pop();
            }
            if(!s.empty())
          ans[i] = s.top();

            s.push(a[i]);
        }
        for(int i = 0; i<n; i++) {
            cout << ans[i] << " ";
        }
    
    return 0;
}
