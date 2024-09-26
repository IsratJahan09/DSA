// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> interval;

int main() {
    // Write C++ code here
    interval arr[] = { { 1, 3 },
                       { 2, 4 },
                       { 3, 5 },
                       { 7, 9 } };
 
    int N = sizeof(arr) / sizeof(arr[0]);
     vector<pair<int , int>>v;
    sort(arr, arr + N);  
    int res = 0;
      for(int i = 1; i<N; i++){
          if(arr[res].second<arr[i].first){
              v.push_back({arr[res].second, arr[i].first});
          }
          res++;
      }
      for(auto it : v)
      cout << "["  << it.first << " " << it.second << "]" << endl;

    return 0;
}
