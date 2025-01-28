// link - https://codeforces.com/contest/112/problem/A
#include<bits/stdc++.h>
#include<iostream>

#include<string>
using namespace std;
int main()
{
   string a,b;
   cin>>a>>b;
   int i;
   for(i=0; i<a.size(); i++)
   {
   a[i]=towlower(a[i]);
   b[i]=towlower(b[i]);
   }
   if(a==b)
    cout<<"0"<<endl;

   /*  else if(a[i]<b[i])
           {
               cout<<"-1"<<endl;

           }

        else
        {
              cout<<"1"<<endl;
        }  */


  else
   {
       for(i=0;i<a.size(); i++)
       {
           if(a[i]<b[i])
           {
               cout<<"-1"<<endl;
               break;
           }
         if(a[i]>b[i])
           {
               cout<<"1"<<endl;
               break;
           }
       }
   }
return 0;
}
