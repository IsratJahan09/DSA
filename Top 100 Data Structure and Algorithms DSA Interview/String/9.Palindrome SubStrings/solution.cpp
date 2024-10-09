class Solution {
  public:
    int CountPS(char s[], int n) {
        
        int count = 0;
        
        for(int i = 0; i<n; i++){
            
            int l = i; int r = i;
                 while(l >= 0 && r < n && s[l] == s[r]){
                     int curr_len = r-l+1;
             if(curr_len>1) count++;
                     l--; r++;
                 }
             
             
        }
        for(int i = 0; i<n; i++){
            
            int l = i; int r = i+1;
                 while(l >= 0 && r < n && s[l] == s[r]){
                     int curr_len = r-l+1;
             if(curr_len>1) count++;
                     l--; r++;
                 }
             
            
        }
        return count;
        
     }
};
