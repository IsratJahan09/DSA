/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
vector<int>graph[N];
vector<bool>visited;
int dis[N];
void bfs(int node){
    vector<int>ans;
    queue<int>q;
    q.push(node);
    visited[node]=true;
    //cout<<node<<" ";
    ans.push_back(node);

    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(auto it: graph[v]){
        if(!visited[it]){
            q.push(it);
            visited[it]=true;
            //cout<<it<<" ";
             ans.push_back(it);
             //for distance
             dis[it]=dis[v]+1;
          }
       
        }
    }
    cout<<"queue is: ";
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;

   //distance from source -->source=ans[0];
   cout<<"from source node "<<ans[0]<<" :"<<endl;
   for(int i=0;i<ans.size();i++){
    cout<<"distance of "<<i<<" is : "<<dis[i]<<endl;
   }
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int node, edge;
    cin>>node>>edge;

    for(int i=0;i<edge;i++){
        int node1, node2;
        cin>>node1>>node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);

    }
    visited.assign(node,false);

    int source;
    cin>>source;

    bfs(source);


    return 0;
}
/*
input
7 6
0 1
0 2
1 3
1 4
2 5
2 6
0
*/

/*output
queue is: 0 1 2 3 4 5 6 
from source node 0 :
distance of 0 is : 0
distance of 1 is : 1
distance of 2 is : 1
distance of 3 is : 2
distance of 4 is : 2
distance of 5 is : 2
distance of 6 is : 2
    */

// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 1000000
// vector<int> graph[MAX];
// vector<bool> visited;

// void bfs(int u){
//     queue<int> q;
//     q.push(u);
//     visited[u] = true;
//     cout << u << " ";

//     while(!q.empty()){
//         int v = q.front();
//         //cout<<v<<" ";
//         q.pop();
//         for(int i: graph[v])
//             {
//            if(!visited[i]){
//             q.push(i);
//             visited[i] = true;
//             cout << i << " ";
//            }
//         }
//     }

// }

// int main() {

//     cout << "Enter the number of nodes and edges: ";
//     int node, edge;
//     cin >> node >> edge;

//     cout << "Enter the graph: ";
//     for(int i=0; i<edge; i++){
//         int node1, node2;
//         cin >> node1 >> node2;
//         graph[node1].push_back(node2);
//         graph[node2].push_back(node1);
//     }

//     visited.assign(node+1,false);

//     cout << "Enter the starting node: ";
//     int source;
//     cin >> source;

//     cout << "BFS path is: ";
//     bfs(source);

//     return 0;
// }
