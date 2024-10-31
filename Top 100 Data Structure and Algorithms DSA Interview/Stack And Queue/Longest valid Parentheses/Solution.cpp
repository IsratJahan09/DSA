class Solution {
  public:
    int maxLength(string& str) {
         stack<int>st;
        st.push(-1);
        int maxi = 0;
        for(int i = 0; i<str.size(); i++){
          if(str[i] == '('){
            st.push(i);
          }
          else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            else{
                maxi = max(maxi, i-st.top());
            }
          }
          
        }
        return maxi;
    }
};
