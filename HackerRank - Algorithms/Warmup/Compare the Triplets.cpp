/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
*  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> a, vector<int> b) {
       int alice = 0;
       int bob = 0;
       vector<int > ans;
       for(int i = 0; i < a.size(); i++){
           if(a[i] > b[i])
           alice++;
           else if(a[i] < b[i])
           bob++;
           else{
               
           }
       }
       ans.push_back(alice);
       ans.push_back(bob);
       return ans;
}
