/*Given a matrix of size N X M, find the transpose of the matrix
Transpose of a matrix is obtained by changing rows to columns and columns to rows. In other words, transpose of A[N][M] is obtained by changing A[i][j] to A[j][i].
Input : arr[] = {{1,2,3}
                 {4,5,6}, 
                 {7,8,9}} and N = 3
Output : 1 4 7 2 5 8 3 6 9
Explanation:1 2 3              1 4 7
            4 5 6 -----------> 2 5 8
            7 8 9              3 6 9
Transpose of array.
*/
solution 
vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here
    vector<vector<int>>v(n, vector<int>(n));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            v[j][i] = a[i][j];
            
        }
    }
    return v;
     
}
