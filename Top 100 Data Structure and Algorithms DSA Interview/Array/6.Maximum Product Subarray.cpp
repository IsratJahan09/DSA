/*Given an integer array, the task is to find the maximum product of any subarray.
Examples:
Input: arr[] = {-2, 6, -3, -10, 0, 2}
Output: 180
Explanation: The subarray with maximum product is {6, -3, -10} with product = 6 * (-3) * (-10) = 180
Input: arr[] = {-1, -3, -10, 0, 60}
Output: 60
Explanation: The subarray with maximum product is {60}.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin >> n;
int a[n];
  for(int i =0 ; i<n; i++){
    cin >> a[i];
  }
  int max_prod = INT_MIN;
  int left_prod = 1;
  int right_prod = 1;
  for(int i = 0; i<n ; i++){
  if(left_prod == 0)
    left_prod = 1;
  if(right_prod == 0)
  right_prod = 1;

  left_prod *= a[i];
  int j = n-i-1;
  right_prod *= a[j];
max_prod = max({right_prod , left_prod , max_prod});
  }
cout << max_prod << endl;
return 0;
}
