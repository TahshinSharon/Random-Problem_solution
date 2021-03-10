#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    for(i=0;i<s.length();)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+3;
        }
        else
        {
            cout<<s[i];
            ++i;
            if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
            {
                cout<<" ";
            }
        }
    }
    return 0;
}