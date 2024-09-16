/*A sorted(in ascending order) array arr[ ] with distinct elements is rotated at some unknown point, 
the task is to find the minimum element in it.
Examples:
Input: arr[] = [4 ,5 ,1 ,2 ,3]
Output: 1
Explanation: 1 is the minimum element in the array.
*/

class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n = arr.size();
        int l = 0;
        int r = n-1;
        if(arr[l]<arr[r])
        return arr[l];
        while(l<r){
          int mid = (l+r)/2;
            if(arr[mid]>arr[r]){
                l = mid+1;
            }
            else
             r = mid;
        }
        return arr[l];
    }
};

// if find with duplicate then code have been some changes. this is leetcode 154 problem
//this code is Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        if(nums[l] < nums[r])
          return nums[l];
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid]>nums[r])
            l = mid+1;
            else if(nums[mid]<nums[r])
            r = mid;
            else
            r--;
        }
        return nums[l];
    }
};
