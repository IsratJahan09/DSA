#include<bits/stdc++.h>
using namespace  std;
int main(){
     int a,b; cin >> a >> b;
     int s[a];
     int s1[b];
     for(int i = 0; i<a ; i++){
     cin >> s[i];
     }

    int lcm = s[0];
    for(int i = 1; i<a ; i++)
    lcm = (lcm*s[i])/__gcd(s[i], lcm);
    
    for(int i = 0 ; i<b ; i++){
    cin >> s1[i];
    }
    
    int Gcd  = s1[0];
    for(int i = 1 ; i<b ; i++)
     Gcd = __gcd(s1[i], Gcd);

    int count = 0;
    int result = 0;
    while(count <= Gcd){
        count += lcm;
        if(Gcd%count == 0)
        result++;
    }
    cout << result <<endl;
    return 0;
}
