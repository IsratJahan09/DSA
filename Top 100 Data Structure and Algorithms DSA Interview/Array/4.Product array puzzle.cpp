/* Given an array nums[], construct a Product Array nums[] such that nums[i] is equal to the product of all the elements of nums 
except nums[i]. N.B: solution without divison
Examples:
Input: nums[] = [10, 3, 5, 6, 2]
Output: [180, 600, 360, 300, 900]
Explanation: For i=0, P[i] = 3*5*6*2 = 180.
For i=1, P[i] = 10*5*6*2 = 600.
For i=2, P[i] = 10*3*6*2 = 360.
For i=3, P[i] = 10*3*5*2 = 300.
For i=4, P[i] = 10*3*5*6 = 900
*/

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        int n = nums.size();
        vector<long long int>pref(n, 1);
        vector<long long int>suf(n, 1);
        //  pref[0] = 1;
        //  suf[n-1] = 1;
        for(int i =1; i<n; i++){
            pref[i] = pref[i-1] * nums[i-1];
        }
        
        for(int i = n-2; i>=0; i--){
            suf[i] = suf[i+1]*nums[i+1];
        }
        
        vector<long long int>v(n);
        for(int i = 0; i<n; i++){
            v[i] = pref[i] * suf[i];
        }
        
        // for(int i = 0; i<n; i++)
        // cout << v[i] << " ";
        // cout << endl;
        return v;
    }
};
