#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
        vector<int>ans;
        vector<vector<int>> temp(n, vector<int>());    //row , column
        int last = 0;
        for(auto i : queries){
            if(i[0]== 1){
                int ind = (i[1]^last)%n;
                temp[ind].push_back(i[2]);
       
         }
         else{
             int ind = (i[1]^last)%n;
             last = temp[ind][i[2]%(temp[ind].size())];
             ans.push_back(last);
         }
        }
        return ans;
}


