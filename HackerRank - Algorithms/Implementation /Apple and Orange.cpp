#include<bits/stdc++.h>
using namespace  std;
int main(){
    int  s, t; cin >> s >> t;
    int a, b;   cin >> a >> b;
    int m, n;   cin >> m >> n;
    int arr[m];
    int sum = 0;
    int count = 0;
    int count_1 = 0;
    for(int i = 0; i < m; i++){
        cin>> arr[i];
        sum = a+arr[i];
        if(sum >= s and sum<= t)
        count ++;
    }
    
        int arr_1[n];

    for(int i = 0; i < n; i++){
        cin>> arr_1[i];
        sum = b+arr_1[i];
        if(sum >= s and sum<= t)
        count_1 ++;
    }
    cout << count <<endl;
    cout << count_1 <<endl;
}
