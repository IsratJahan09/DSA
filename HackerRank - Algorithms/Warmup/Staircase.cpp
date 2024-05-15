#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;cin>>n;
     int a = ' ';
     int b = '#';
    for(int i = 1; i <= n; i++){
       for(int j = n; j>i ; j-- ){
           cout << " ";
       }
        for(int k = 1; k<=i ; k++){
            cout<<"#";
        }
        cout <<endl;
    }
    return 0;
}
