/*Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S).
Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict,
return the substring which occurs first ( with the least starting index ).
Example 1:
Input:
S = "aaaabbaa"
Output:
aabbaa
Explanation:
The longest palindrome string present in
the given string is "aabbaa".
Your Task:  
You don't need to read input or print anything. Your task is to complete the function longestPalindrome() which takes string S as
input parameters and returns longest pallindrome present in string. */

class Solution{   
public:
    string longestPalindrome(string S){
        int n = S.size();
        int st = 0;
        int max_len = 0;
        for(int i = 0; i<n; i++){                        //odd
            int l = i; int r = i;
            while(l>=0 and r<n and S[l] == S[r]){
                l--; r++;
                
            }
            int curr_len = r-l-1;
            if(max_len<curr_len){
                max_len = curr_len;
                st = l+1;
            }
        }
         for(int i = 0; i<n; i++){                          //even
            int l = i; int r = i+1;
            while(l>=0 and r<n and S[l] == S[r]){
                l--; r++;
                
            }
            int curr_len = r-l-1;
            if(max_len<curr_len){
                max_len = curr_len;
                st = l+1;
            }
        }
        return S.substr(st, max_len);
    }
};

