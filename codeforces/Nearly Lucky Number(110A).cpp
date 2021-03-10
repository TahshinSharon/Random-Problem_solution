#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,i,l;
    string s;
    cin>>s;
    for(i=0;i<=s.length();i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            count+=1;
        }
    }
    if(count==4 || count==7)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
