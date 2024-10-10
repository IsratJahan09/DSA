class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        string ans = ""; 
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[len-1];
        for(int i = 0; i<a.size(); i++){
            if(a[i]!=b[i] ){
                break;
            }
            ans+=a[i];
        }
         if(ans=="") return "-1";
         else
        return ans;
    }
};
