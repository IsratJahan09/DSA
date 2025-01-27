// link - https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int>v;
        for(int i = 1; i<arr.size(); i++){
            v.push_back(abs(arr[i] - arr[i-1]));
        }


        
        for(int i = 0; i<v.size()-1; i++){
            if(v[i] != v[i+1]){
                return false;
            }
        }
        return true;
    }
};
