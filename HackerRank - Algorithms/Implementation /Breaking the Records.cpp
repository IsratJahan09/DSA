#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i<n; i++)
    cin >> a[i];

    int mx = a[0];
    int mn = a[0];
    int mx_count = 0;
    int mn_count = 0;

    for(int i = 1 ; i<n; i++){
        if(mx < a[i]){
            mx = a[i];   //1 
            mx_count++;
        }
         if(mn > a[i]){
            mn = a[i];
            mn_count++;  //1
        }
    }
    cout << mx_count << " " << mn_count<<endl;
}