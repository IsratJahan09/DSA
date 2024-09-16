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

/* leetcode problem-152
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_prod = nums[0];
        int min_prod = nums[0];
        int res = nums[0];
        for(int i = 1; i<n; i++){
            if(nums[i]<0)
            swap(max_prod, min_prod);

            max_prod = max(max_prod * nums[i], nums[i]);
            min_prod = min(min_prod * nums[i] , nums[i]);
            
            res = max(res, max_prod);
        }
        return res;
    }
};*/
