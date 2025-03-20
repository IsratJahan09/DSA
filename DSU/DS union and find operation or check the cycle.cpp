/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];

vector<int>parent;

 int find (int val){
    if(parent[val] == -1) 
    return val;
    return find(parent[val]);
 }

 void union_op(int from, int to){
    from = find(from);
    to = find(to);

    parent[from] = to;
    
 }



bool iscycle(vector<pair<int, int>>edge_list){

    for(auto p : edge_list){
        int from = find(p.first);
        int to = find(p.second);

        if(from == to) return true;
        
        union_op(from, to);
    }
    return false;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "enter the edges and vertices " << endl; 
    int E;  // no of edges                          4
    int V; //no of vertices (0 to v-1)              4
    cin >> E >> V;

    cout << "enter the edge_list " << endl;

    parent.resize(V, -1);                          //(0 to 3 size -1 -1 -1 -1)

    vector<pair<int, int>>edge_List;

    for(int i = 0; i<E; i++){              //adjacency list [(0,1) (0,3) (2, 3) (1, 2)]
        int from , to; cin >> from >> to;
        edge_List.push_back({from, to});
    }

    if(iscycle(edge_List))
    cout << "TRUE" << endl;
    else
    cout << "FALSE" << endl;

    return 0;
}
