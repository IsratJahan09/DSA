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

void deleteroot(int a[],int n){
    a[1]=a[n];
    n=n-1;
   int i=1;
   while(i<n){
    int l=left(i);
    int r=right(i);
    int learge =i;
    if(l<n and a[l]>a[learge]){
        learge=l;
    }
    if(r<n and a[r]>a[learge])
    learge=r;
   
   if(learge!=i){
    swap(a[i],a[learge]);
    i=learge;

     }
   else
   break;
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
    deleteroot(a,n);
    cout<<"after delet array : ";
    printarray(a,n-1); 
    return 0;
}
