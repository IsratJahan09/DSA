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
    ll t; cin >> t;
	priority_queue<pair<ll,string>,vector<pair<ll,string>>,greater<pair<ll,string>>> q;
    map<string, ll>mp;

    for(ll i = 1; i<=t; i++){
      ll n; cin >> n;
      string s; cin >> s;

      if(n==3){
        while(!q.empty()){
            pair<ll , string>p = q.top();
            q.pop();
            if(mp[p.second] == p.first){
                cout << p.second << " " << i << endl;
                mp.erase(p.second);
                break;
            }
        }
        continue;
      }
      ll l; cin >> l;
     q.push({l,s});
     mp[s] = l;
    }
    return 0;
}
