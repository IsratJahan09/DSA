// User function template for C++
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
