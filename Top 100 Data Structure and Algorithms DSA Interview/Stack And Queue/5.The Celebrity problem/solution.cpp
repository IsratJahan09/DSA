//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        int n = mat[0].size();
        
        vector<int>iknow(n, 0);
        vector<int>allknow(n, 0);
        
        for(int i = 0; i<n; i++){
            
            for(int j = 0; j<n; j++){
                if(mat[i][j]==1){
                    iknow[i]++;
                    allknow[j]++;
                    }
                }
            }
        for(int i = 0; i<n; i++){
            if(allknow[i] == n-1 and iknow[i]==0){
                     return i;
                   }
            }
            return -1;
    }
};
