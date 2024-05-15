#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     long long  n;
    long long Max = INT_MIN;
    long long Min = INT_MAX;
     vector<long long>v;
     while(cin>>n){
        v.push_back(n);     
     }
     long long sum = 0;
     long long k = v.size();
     sort(v.begin(), v.end());
     for(int i = 0; i<k; i++ ){
         sum+= v[i];
     }
     cout<< sum-v[k-1] << " " << sum-v[0] <<endl;
    //  for(int i = 0; i < k; i++){
    //      long long sum = 0;
    //      for(int j = 0; j < k; j++){
    //           if(j == i){
                  
    //           }
    //           else{
    //               sum +=v[j];
    //           }
    //      }
    //      Max = max(sum, Max);
    //     Min = min(sum, Min);
    //  }
    // cout << Min << " "<< Max <<endl;
    return 0;
}
