/*Given a string str of length N, consisting of ‘(‘ and ‘)‘ only, the task is to check whether it is balanced or not.
Examples:
Input: str = “((()))()()” 
Output: Balanced
Input: str = “())((())” 
Output: Not Balanced 
*/
// solution

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size();
    stack<char>st;
    for(int i = 0; i<n; i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(!st.empty() and st.top()=='('){
                st.pop();
            }
            else
            st.push(s[i]);
        }
    }
    if(st.empty())
    cout << "TRUE" << endl;
    else
    cout << "FALSE" << endl;

    return 0;
}
