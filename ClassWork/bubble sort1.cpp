/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void solve(int a[], int n){
    int flage=0;
    int temp=0;
    for(int i=0;i<n;i++){
        flage =0;
        for(int j=0;j<n-i-1;j++){
          if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flage=1;
            /*
            without third variable swap 
              a=2
              b=5;
               a=a+b;   //7
               b=a-b;   //7-5=2
               a=a-b //  7-2=5

            
            */
          }
        }
        if(flage==0)
        break;
    }
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     solve(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}