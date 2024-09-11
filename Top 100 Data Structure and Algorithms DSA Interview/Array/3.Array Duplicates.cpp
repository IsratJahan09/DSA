/*Given an array arr of size n which contains elements in range from 0 to n-1, you need to find all the elements occurring 
more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 
Examples:
Input: n = 4, arr[] = [0,3,1,2]
Output: -1
Explanation: There is no repeating element in the array. Therefore output is -1.

Solution */

class Solution {
  public:
    vector<int> duplicates(vector<int> arr) {
    
        // O(nlogn) low efficient
/*        unordered_map<int, int>mp;
        vector<int>v;
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
            }
        
         for(auto it : mp){
             if(it.second>1)
             v.push_back(it.first);
         }
         sort(v.begin(), v.end());
        if(v.empty()) v.push_back(-1);
        
        return v;  */
                                                        //this solution is apply because of array element is 0 to n-1
//  o(n) efficient solution
     int n = arr.size();
        int freq[n] = {0};
        vector <int> result;
        
        for (int i=0; i<n;++i){
           freq[arr[i]] ++;
        }
        
        for (int i=0 ; i<n; ++i){
            if (freq[i] >1)
              result.push_back(i);
        }
        
        if (result.empty())
          return {-1} ;
          
        else return result;   
    }
};

