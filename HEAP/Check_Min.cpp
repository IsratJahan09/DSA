/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int parent(int i){
    return i/2;
}

bool min_heap(int h[],int n){
    for(int i=n;i>1;i--){
        int p=parent(i);
        if(h[p]>h[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int heap_size=7;
    int H[]={0,4,6,5,7,8,9,10};         //index 0 no counted
     if(min_heap(H, heap_size))         
     cout<<"min heap"<<endl;
     else
     cout<<"not min heap"<<endl;
     
    return 0;
}
