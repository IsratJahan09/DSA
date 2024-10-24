class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        unorderd_map<int, stack<int>>mp;
        
        for(int i = 0; i<e; i++){
            mp[A[i]].push(A[i+1]);
            i++;
        }
        for(int i = 0; i<e; i++){
            if(mp[A[i]].top() != B[i+1])
            return false;
            
            mp[A[i]].pop();
        }
        return true;
    }
};
