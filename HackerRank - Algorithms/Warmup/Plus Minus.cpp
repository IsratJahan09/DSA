#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n];
    float positive=0,negative=0,zero=0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        if(a[i]>0)
            positive++;
        else if(a[i]<0)
            negative++;
        else
            zero++;
    }
    cout<<fixed<<setprecision(6)<<positive/n<<endl;
    cout<<fixed<<setprecision(6)<<negative/n<<endl;
    cout<<fixed<<setprecision(6)<<zero/n<<endl;
    return 0;
}
