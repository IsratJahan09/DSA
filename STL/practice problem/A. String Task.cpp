//link - https://codeforces.com/problemset/problem/118/A
/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
       string k = "";
    for(int i = 0; i<s.size(); i++){
        char c = tolower(s[i]);
       // cout << c ;
        if(c == 'a' || c == 'e' || c == 'o' || c == 'i' || c =='u' || c == 'y'){

            continue;
        }
        else{
             k += '.';
             k+=c;
        }
    }
    cout << k << endl;
    return 0;
}
