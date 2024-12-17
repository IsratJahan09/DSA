// /*........Hard work and consistency is the only way to success........ */
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=1005;
// //int d[N][N],pref[N][N];
// int main()
// {
//     // clock_t st= clock();
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t; cin >> t;
//     while(t--){
//         priority_queue<ll>maxheap;
//         priority_queue<ll, vector<ll>, greater<ll>>minheap;

//         while(true){
//             ll x;
//             cin >> x;
//          if(x == 0){
//             break;
//         }
//         else if (x==-1){
//             printf("%d\n", maxheap.top());
//         maxheap.pop();
//         if(maxheap.size() < minheap.size()){
//             maxheap.push(minheap.top());
//             minheap.pop();
//            }
//         }

//         else{
//             if(maxheap.size() == 0 and minheap.size() == 0)
//             maxheap.push(x);
//             else{
//             if(maxheap.top()<=x)
//              minheap.push(x);
//              else
//              maxheap.push(x);

//              if(maxheap.size() < minheap.size()){
//                 maxheap.push(minheap.top());
//                 minheap.pop();
//              }
//              else if(maxheap.size() > minheap.size() + 1){
//                 minheap.push(maxheap.top());
//                 maxheap.pop();
//              }
//             }
//          }
//         }
//     }
//     return 0;
// }

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
    ll t; cin >> t;
    while(t--){
        priority_queue<ll>a;
        priority_queue<ll, vector<ll>, greater<ll>>b;

        while(true){
            ll x;
            cin >> x;
         if(x == 0){
            break;
        }
         
         if(x == -1){
            printf("%d\n", a.top());
            a.pop();
         }
         else{
            if(a.empty() or  x <= a.top()) a.push(x);
            else b.push(x);
         }
        if(a.size() > (a.size() + b.size() + 1) / 2) b.push(a.top()), a.pop();
		else if (a.size() < (a.size() + b.size() + 1) / 2) a.push(b.top()), b.pop();
        }

    }  

    return 0;
}
