/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
int left(int i){
    return i*2;
}

int right(int i){
    return i*2+1;
}
int parent(int i){
  return i/2;
}
void insert(int a[],int n,int value){
    n=n+1;
    a[n]=value;
    int i=n;
    while(i>1){
      int p=  parent(i);
      if(a[p]<a[i]){
        swap(a[p],a[i]);
        i=p;
      }
      else
      return;

    }
} 

void printarray(int a[],int n){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=5;
    int a[]={0,10,5,3,2,4};
    int value=15;
    cout<<"orginal array : ";
    printarray(a, n);
    insert(a,n,value);
    cout<<"after insert array : ";
    printarray(a,n+1); 
    return 0;
}
