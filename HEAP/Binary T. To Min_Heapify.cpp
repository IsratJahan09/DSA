/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];

int left(int i){
    return (2*i);
}

int right(int i){
    return (2*i+1);
}

int parent(int i){
    return i/2;
}

void min_heapify(int h[],int n, int i){   /* i means form where u want to start heapify for 
                                           example 1,3,2,an your wish.but not 0 index*/

   int l,r,smallest,t;
   l=left(i);
   r=right(i);

   if(l<=n && h[l]<h[i]){
     smallest=l;
   } 
   else 
   smallest=i;

   if(r<=n && h[r]<h[smallest])
  smallest=r;

   if(smallest!=i){
    t=h[i];                   //swap(h[i],h[largest])
    h[i]=h[smallest];
    h[smallest]=t;

    min_heapify(h, n, smallest);
   }
}

void build_min_heap(int h[], int n){
    for(int i=n/2;i>=1;i--){
        min_heapify(h, n, i);
    }
}
void print_heap(int h[], int n){
    for(int i=1;i<=n;i++)
    cout<<h[i]<<" ";
    cout<<endl;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=9;
    int heap[]={0,12,7,1,3,10,17,19,2,5};

     cout << "Original array: ";
    print_heap(heap, n);

      build_min_heap(heap,n);
          

      cout<<"Min_heapified array : ";
      print_heap(heap,n);
      
    
    return 0;
}
