/*
Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.
Examples : 
Input: arr[] = {0, -1, 2, -3, 1}
Output: [[0, -1, 1], [2, -3, 1]]
Explanation: The triplets with zero sum are 0 + -1 + 1 = 0 and 2 + -3 + 1 = 0  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
      int n; cin >> n;
      int a[n];
      for(int i = 0; i<n; i++)
      cin>>a[i];
      set<vector<int>>s;
      vector<vector<int>>v;
      sort(a, a+n);
      for(int i = 0; i<n-2; i++){
          int l = i+1;
          int r = n-1;
          while(l<r){
              int sum = a[i]+a[l]+a[r];
              if(sum == 0){
                  s.insert({a[i], a[l], a[r]});
                  l++;
                  r--;
              }
              else if(sum>0)
              r= r-1;
              else
              l++;
          }
      }
      for(auto it:s){
          v.push_back(it);
      }
      for(int i =0; i<v.size(); i++){
          for(int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
          }
      }
      
    return 0;
}
