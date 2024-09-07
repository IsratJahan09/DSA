/*Question:
Given an array arr of positive integers and another number x. Determine whether two elements exist in arr whose sum is exactly x or not. 
Return a boolean value true if two elements exist in arr else return false.
Examples:
Input: x = 16, arr[] = [1, 4, 45, 6, 10, 8]
Output: true
Explanation: arr[3] + arr[4] = 6 + 10 = 16


Answer:
*/
class Solution {
  public:
    // Function to check if array has 2 elements
    // whose sum is equal to the given value
    bool hasArrayTwoCandidates(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        unordered_set<int>us;
        
        for(int i = 0; i<=n-1; i++){
            int com = x - arr[i];
            
            if(us.find(com)!=us.end()){
                return true;
            }
            us.insert(arr[i]);
        }
        return false;
    }
};

// if find index then
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int>us;
        vector<int>v;
        for(int i = 0; i<n; i++){
            int com = target-nums[i];

            if(us.find(com)!=us.end()){
                v.push_back(i);
                v.push_back(us[com]);
            }
            us[nums[i]]= i;
        }
        return v;
    }
};
