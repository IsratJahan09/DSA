/*Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] 
is 1 then all the cells in its ith row and jth column will become 1.
Example 1:
Input:
matrix[][] = {{1, 0},
              {0, 0}}
Output: 
1 1
1 0 
Explanation:
Only cell that has 1 is at (0,0) so all 
cells in row 0 are modified to 1 and all 
cells in column 0 are modified to 1. */
class Solution
{   
    public:
      void booleanMatrix(vector<vector<int> > &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int>row(r, 0);
        vector<int>col(c, 0);
        
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(matrix[i][j]==1){
                    col[j] = 1;
                    row[i] = 1;
                }
            }
        }
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(row[i] == 1 or col[j] == 1){
                    matrix[i][j] = 1;
                }
            }
        } 
    }
};
