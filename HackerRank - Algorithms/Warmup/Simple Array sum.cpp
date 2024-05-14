
/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int simpleArraySum(vector<int> ar) {
   int n = ar.size();
   int sum = 0;
   for(int i = 0; i<n; i++)
   sum += ar[i];
   return sum;
}
