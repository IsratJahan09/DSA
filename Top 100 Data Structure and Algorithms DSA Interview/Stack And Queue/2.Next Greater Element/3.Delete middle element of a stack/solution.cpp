class Solution {
  public:
    // Function to delete middle element of a sack.
    void deleteMid(stack<int>& s, int sizeOfsack) {
        int mid = (sizeOfsack+1)/2;
        vector<int>v;
        if(sizeOfsack%2!=0){
        while(!s.empty() and mid>1){
            v.push_back(s.top());
            s.pop();
            mid--;
        }
        }
        if(sizeOfsack%2==0){
          while(!s.empty() and mid>=1){
            v.push_back(s.top());
            s.pop();
            mid--;
        }
        }

        s.pop();
        reverse(v.begin(), v.end());
        for(int i = 0; i<v.size(); i++){
            s.push(v[i]);
        }
    }
};
