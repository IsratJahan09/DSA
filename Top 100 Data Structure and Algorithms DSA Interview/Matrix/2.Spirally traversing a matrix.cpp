/*You are given a rectangular matrix, and your task is to return an array while traversing the matrix in spiral form.
Examples:
Input: matrix[][] = [[1, 2, 3, 4],
                  [5, 6, 7, 8],
                  [9, 10, 11, 12],
                  [13, 14, 15,16]]
Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]
Explanation: Applying same technique as shown above, output for the 2nd testcase will be 1 2 3 4 8 12 11 10 9 5 6 7. */

//solution :

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0; int bottom = row-1;
        int left = 0; int right = col-1;
        vector<int>v;
        
        while(left<=right and top<=bottom){
            for(int i = left; i<=right; i++){
                v.push_back(matrix[top][i]);
                
            }
            top++;
            
            for(int i = top; i<=bottom; i++){
                v.push_back(matrix[i][right]);
            }
            right--;
            
            if(top<=bottom){
            for(int i = right; i>=left; i--){
                v.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            
            if(left<=right){
            for(int i = bottom; i>=top; i--){
                v.push_back(matrix[i][left]);
            }
            left++;
            }
            
        }
        return v;
    }
};
