#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    long long sum = 0;
    while(n--){
        long long x; cin >> x;
        sum +=x;
    }
    cout << sum <<endl;
    return 0;
}
