// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n][n];

//     long long int d=0; 
//     long long int d2=0; 

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//             if (i == j) d += arr[i][j];
//             if (i == n - j - 1) d2 += arr[i][j];
//         }
//     }

//     cout << abs(d - d2) << endl; 
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n;j++){
            cin>> a[i][j];
        }
    }
    int diff_1 = 0;
    int diff_2 = 0;
    for(int i = 0; i< n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) 
            diff_1+=a[i][j];
            if(n-1-i-j == 0)      //if (i == n - j - 1) d2 += arr[i][j];
            diff_2 += a[i][j];          
            // cout << diff_2 <<endl;
        }
    }
    cout << abs(diff_2 - diff_1) <<endl;
    return 0;
}


