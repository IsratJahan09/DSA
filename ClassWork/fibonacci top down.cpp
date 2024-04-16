//Fibonacci Series using Dynamic Programming
//Top Down Approach
//Memoization
//Time Complexity: O(n)
//Space Complexity: O(n)

/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
vector<int> result(N, -1); 
int fibo(int n){
    if(result[n]==-1){
        if(n<=1)
        return n;                     // base case:0,1
        else
        result[n]=fibo(n-1)+fibo(n-2);
    }
    return result[n];
}

int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;

  int res=fibo(n);
  cout<<res<<endl;

    return 0;
}