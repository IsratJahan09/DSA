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
    int node,edge;
    cin>>node>>edge;
    vector<int>dis(node+1,N);
    vector<vector<pair<int, int>>>graph(node+1);
    for(int i=0;i<edge;i++){
        int u,v,w;cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});

    }
    int source;
    cin>>source;
    dis[source]=0;

    set<pair<int, int>>s;

    s.insert({0,source});
    while ((!s.empty())){
        auto x=*(s.begin());
        s.erase(x);
        for(auto it:graph[x.second]){
        if(dis[it.first]>dis[x.second]+it.second){
            s.erase({dis[it.first], it.first});
            dis[it.first]=dis[x.second]+it.second;
            s.insert({dis[it.first], it.first});
        }
    }
    }
    for(int i=1;i<=node;i++){
        if(dis[i]<N)
        cout<<dis[i]<<" ";
        else
        cout<<-1<<endl;
        
    }
    

    return 0;
}


