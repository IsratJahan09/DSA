/*........Hard work and consistency is the only way to success........ */
//heap sort using max heapify
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int left(int i){
    return 2*i;
}

int right(int i){
    return 2*i+1;
}
int parent(int i){
    return i/2;
}

void max_heapify(int a[], int n, int i){
    int largest,t,l,r;
    l=left(i);
    r=right(i);
    largest=i;
    if(l<=n and a[l]>a[largest])
    largest=l;
    if(r<=n and a[r]>a[largest])
    largest=r;
    if(largest!=i){
        swap(a[i],a[largest]);
        max_heapify(a, n, largest);
    }
}

void build_max_heap(int a[], int n){
    for(int i=n/2;i>=1;i--)
    max_heapify(a,n,i);

}
void heap_sort(int a[], int n ){
      build_max_heap(a, n);
      for(int i=n;i>1;i--){
        swap(a[1],a[i]);
        n--;
        max_heapify(a,n,1);
      }
}
void printarray(int a[], int n){
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}



int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=6;
    int a[]={0,12,11,13,5,6,7};
    
    cout<<"orginal array : ";
    printarray(a, n);
    heap_sort(a,n);
    cout<<"after sort array : ";
    printarray(a,n); 
    return 0;
}
