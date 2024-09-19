/*Given N non-negative integers a1,a2,....an where each represents a point at coordinate (i, ai).
N vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i,0). Find two lines,
which together with x-axis forms a container, such that it contains the most water.
Note : In Case of single verticle line it will not be able to hold water.
Example 1:
Input:
N = 4
a[] = {1,5,4,3}
Output: 6
Explanation: 5 and 3 are distance 2 apart.
So the size of the base = 2. Height of
container = min(5, 3) = 3. So total area
= 3 * 2 = 6.
*/
long long maxArea(long long A[], int len)
{
    long long l = 0;
    long long r = len-1;
    long long area = 0;
    while(l<r){
        area = max(area, min(A[l], A[r]) * (r-l));
        
        if(A[l]<A[r])
        l=l+1;
        else
        r=r-1;
    }
    return area;
}
