#include<bits/stdc++.h>
using namespace  std;
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x ; cin >> x;
        if(x<=37){
            cout << x <<endl;
        }
        else{
            if(x%5 == 0){
                cout << x <<endl;
            }
            
            else if((x+2) % 5 == 0)
            cout << x+2 <<endl;
            
            else if ((x+1)% 5 == 0)
            cout << x+1 <<endl;
            
            else
             cout << x << endl;
        }
    }   
    return 0;
}
