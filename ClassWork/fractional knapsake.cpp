/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
float knapsake(float p[], float w[], int n, float wei){
    float ks[n],tp=0;
    int i;
   
    for(int i=0;i<n;i++){
        ks[i]=0.0;
    }
    float u = wei;
    for(i=0;i<n;i++){
        if(w[i]>u)
        break;
        else{
            ks[i]=1.0;
            tp=tp+p[i];
            u=u-w[i];
        }
    }
    
    ks[i]=u/w[i];
    tp=tp+(ks[i]*p[i]);
  
    
   
    for(int i=0;i<n;i++)
    cout<<ks[i]<<" ";
    cout<<endl;
    cout<<tp<<endl;
    
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    float wei;
    cin>>wei;
    float w[n], p[n];
    for(int i=0;i<n;i++)
    cin>>w[i];

    for(int i=0;i<n;i++)
    cin>>p[i];
  
 
    float temp=0;
    float rto[n];
    
    for(int i=0;i<n;i++)
    rto[i]=p[i]/w[i];

   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(rto[i]<rto[j]){
            temp=rto[j];
            rto[j]=rto[i];
            rto[i]=temp;

            temp=w[j];
            w[j]=w[i];
            w[i]=temp;

            temp=p[j];
            p[j]=p[i];
            p[i]=temp;
           }
           
        }
    }
    knapsake(p,w,n,wei);

    return 0;
}