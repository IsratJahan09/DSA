/*Given an integer array arr[]. Find the contiguous sub-array(containing at least one number) that has the maximum sum and return its sum.
Examples:
Input: arr[] = [1, 2, 3, -2, 5]
Output: 9
Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.
*/
//O(n)
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int max_sum = arr[0];
        int  res = arr[0];
        for(int i = 1; i<arr.size(); i++){
            max_sum = max(max_sum+arr[i], arr[i]);
            res = max(res, max_sum);
        }
        return res;
    }
};
