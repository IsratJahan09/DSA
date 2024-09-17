/*Given a sorted and rotated array arr[] of n distinct elements, the task is to find the index of given key in the array.
If the key is not present in the array, return -1.
Example:  
Input  : arr[] = {4, 5, 6, 7, 0, 1, 2}, key = 0
Output : 4
Input  : arr[] = { 4, 5, 6, 7, 0, 1, 2 }, key = 3
Output : -1 */

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0; int r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target)
            return true;
            if(nums[l]==nums[mid] && nums[mid]==nums[r]){
            r--;
            l++;
            continue;
             }
            if(nums[l]<=nums[mid]){
            if(nums[l]<=target and target<=nums[mid])
              r = mid-1;
            else
              l=mid+1;   
            }
            else{
                if(nums[mid]<=target and target <= nums[r])
                l = mid+1;
                else
                r=mid-1;
            }
        }
        return false;
    }
};
