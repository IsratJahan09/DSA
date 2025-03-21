/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];

struct node{
    int parent;
    int rank;
};

vector<node>dsuf;

int find(int v){
    if(dsuf[v].parent == -1) return v;
    return dsuf[v].parent = find(dsuf[v].parent);
}
void union_op(int fromp , int top){
    if(dsuf[fromp].rank>dsuf[top].rank)
    dsuf[top].parent = fromp;
    else if(dsuf[fromp].rank<dsuf[top].rank)
    dsuf[fromp].parent = top;
    else{
        dsuf[fromp].parent = top;
        dsuf[top].rank += 1;
    }
}


bool iscyclic(vector<pair<int, int>>& edge_list){
    for(auto p : edge_list){
        int fromp = find(p.first);
        int top = find(p.second);

        if(fromp==top)
        return true;

        union_op(fromp, top);        
    }

    return false;
}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int E; int V;
    cin >> E >> V;
    
    dsuf.resize(V);

    for(int i = 0; i<V;i++){
        dsuf[i].parent=-1;
        dsuf[i].rank = 0;
    }

    vector<pair<int, int>>edge_list;
    for(int i = 0; i<E; i++){
        int from , to; cin >> from >> to;
        edge_list.push_back({from, to});
    }

    if(iscyclic(edge_list))
    cout<<"TRUE"<<endl;
    else
    cout <<"FALSE"<<endl;

    return 0;
}
/*
4 4
0 1
2 3
1 2
0 4
4 3
*/   // alternative way is bfs
