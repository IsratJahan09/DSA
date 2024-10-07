/*Given a single sentence s, check if it is a palindrome or not. Ignore white spaces and any other character you may encounter. 
Example 1:
Input:
s = race car.
Output: 1 
Explanation: processing str gives us
"racecar" which is a palindrome. */

//solution

class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    string k = "";
	    for(auto i:s){
	        if(isalnum(i)){
	            k+=tolower(i);
	        }
	    }
	   string l = k;
	   reverse(l.begin(), l.end());
  	    if(l==k) return 1;
	    else    return 0;
	}
};

