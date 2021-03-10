#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int l,i,c=0,d=0;
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            c++;
        }
        else d++;
    }
    if(c>d)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else if(c<=d)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout<<s<<endl;
    return 0;
}
