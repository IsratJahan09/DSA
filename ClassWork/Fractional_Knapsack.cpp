/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
float knapsack(float profit[],float weight[],int n,float cap){
    int i;          // initially i;
    float a[n],tp=0;
    for( i=0;i<n;i++)      // not declar int 
    a[i]=0.0;
    float u=cap;
    for(i=0;i<n;i++){
        if(weight[i]>u){
            break;
        }
        else{
           a[i]=1.0;
           tp=tp+profit[i];
           u=u-weight[i];
        }
    }
   
   a[i]=u/weight[i];
   tp=tp+(a[i]*profit[i]);

   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
   cout<<endl;
   cout<<tp<<endl;
    
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    float capacity;
    cin>>capacity;
    float weight[n],profit[n];
     
    for(int i=0;i<n;i++)
    cin>>weight[i];
    for(int i=0;i<n;i++)
    cin>>profit[i];
  
   float temp=0;
   float ratio[n];
   for(int i=0;i<n;i++)
   ratio[i]=profit[i]/weight[i];
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(ratio[i]<ratio[j]){   //decending order sort
          temp=ratio[j];
          ratio[j]=ratio[i];
          ratio[i]=temp;

          temp=weight[j];
          weight[j]=weight[i];
          weight[i]=temp;

          temp=profit[j];
          profit[j]=profit[i];
          profit[i]=temp;
        }
    }
   }
   knapsack(profit,weight,n,capacity);
    return 0;
}
// time-O(NlogN)

/*
# include<stdio.h>
void knapsack(int n, float weight[], float profit[], float capacity){

float x[20], tp = 0;
int i, j, u;
u = capacity;
for (i = 0; i < n; i++)
x[i] = 0.0;
for (i = 0; i < n; i++) {
if (weight[i] > u)
break;
else {
x[i] = 1.0;
tp = tp + profit[i];
u = u - weight[i];
}
}

x[i] = u / weight[i];
tp = tp + (x[i] * profit[i]);
printf("\nThe result vector is:");
for (i = 0; i < n; i++)
printf("%f\t", x[i]);
printf("\nMaximum profit is:%f", tp);
}


int main() {
float weight[20], profit[20], capacity;
int num, i, j;
float ratio[20], temp;
printf("\nEnter the no. of objects:");
scanf("%d", &num);
printf("\nEnter the wts and profits of each object:");
for (i = 0; i < num; i++) {
scanf("%f %f", &weight[i], &profit[i]);
}
printf("\nEnter the capaciy of knapsack:");
scanf("%f", &capacity);
for (i = 0; i < num; i++) {
ratio[i] = profit[i] / weight[i];
}
for (i = 0; i < num; i++) {
for (j = i + 1; j < num; j++) {
if (ratio[i] < ratio[j]) {
temp = ratio[j];
ratio[j] = ratio[i];
ratio[i] = temp;
temp = weight[j];
weight[j] = weight[i];
weight[i] = temp;
temp = profit[j];
profit[j] = profit[i];
profit[i] = temp;
}
}
}
knapsack(num, weight, profit, capacity);
return(0);
}
*/
