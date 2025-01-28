// link = https://codeforces.com/contest/78/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,s1,s2;
  getline(cin,s);
  getline(cin,s1);
  getline(cin,s2);


  int count=0, count1=0,count2=0;
   for(int k=0;k<s.size();k++)
   {
       if(s[k]=='a'||s[k]=='e'||s[k]=='o'||s[k]=='u'||s[k]=='i')
        count++;
   }
    for(int k=0;k<s1.size();k++)
   {
       if(s1[k]=='a'||s1[k]=='e'||s1[k]=='o'||s1[k]=='u'||s1[k]=='i')
        count1++;
   }
    for(int k=0;k<s2.size();k++)
   {
       if(s2[k]=='a'||s2[k]=='e'||s2[k]=='o'||s2[k]=='u'||s2[k]=='i')
        count2++;
   }
if(count==5&& count1==7&&count2==5)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
    return 0;
}
