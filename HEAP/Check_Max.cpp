/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
 int parent(int i){
    return i/2;
 }
int max_heap(int h[], int n){
    for(int i=n;i>1;i--){
       int p=parent(i);
        if(h[p]<h[i])
        return 0;
    }
    return 1;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int heap_size=9;
    int H[]={0,19,7, 17,3,5,12,10,1,2};     //0 index not counted,
     if(max_heap(H, heap_size)==0)
        cout<<"not max heap"<<endl;
        else
        cout<<"max heap"<<endl;
     
    return 0;
}
