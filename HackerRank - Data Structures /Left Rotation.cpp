/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr) {
vector<int>ans;
   for(int i = d; i<arr.size(); i ++){
       ans.push_back(arr[i]);
   }
   for(int i = 0 ; i<d; i++){
       ans.push_back(arr[i]);
   }
   return ans;
}
