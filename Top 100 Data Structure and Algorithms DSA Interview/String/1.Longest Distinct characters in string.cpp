/*Given a string S, find the length of the longest substring with all distinct characters. 
Example 1:
Input:
S = "geeksforgeeks"
Output: 7
Explanation: "eksforg" is the longest 
substring with all distinct characters.
*/

// solution 

int longestSubstrDistinctChars (string S)
{
    int n = S.size();
    int i = 0; int j = 0;
    int maxlen = 0;                                 // capital S is String and small s is char(assing vector)
    vector<char>s;
    while(i<n and j<n){
        if(find(s.begin(), s.end(), S[j]) == s.end()){
            s.push_back(S[j]);
            j++;
            maxlen = max(maxlen, j-i);
        }
        else{
            s.erase(s.begin());
            i++;
        }
    
    }
    return maxlen;
    
}
