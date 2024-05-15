//O(n^2)
/*
#include<bits/stdc++.h>
using namespace  std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
     int a[n];
     for(int i = 0; i<n ;i++)
     cin>> a[i];
      int Max  = 0;
      int count = 0;
      for(int i = 0 ;i<n; i++){
          count = 0;
          for(int j =0; j<n; j++){
              if(a[i]== a[j])
              count ++;
          }
          Max = max(count , Max);
      }
      cout << Max <<endl;
      return 0;
    
}
*/

// O(NlogN)
/*
#include<bits/stdc++.h>
using namespace  std;
#define long long ll 
const int N=1e7;
int d[N];
void divisor(){
    for(int i = 1; i<=N; i++){
        for(int j = i; j<=N ; j+=i){
            d[i]++;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int n;cin>>n;
    int a[n+1];
    for(int i = 1; i<=n; i++)
    cin>>a[i];
    int Max = 0;
    for(int i = 1; i<=n; i++){
        d[a[i]]++;
       Max = max(d[a[i]], Max);  
    } 
    cout <<Max <<endl;
    return 0;
}
*/

// O(n)

#include<bits/stdc++.h>
using namespace  std;
#define long long ll 
const int N=1e7;
int d[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;cin>>n;
    int a[n+1];
    for(int i = 1; i<=n; i++)
    cin>>a[i];
    int Max = 0;
    unordered_map<int , int> freq;
    
    for(int i = 1; i<=n; i++){
        freq[a[i]]++;
        Max = max(freq[a[i]], Max);
    }
    cout << Max <<endl;
}







