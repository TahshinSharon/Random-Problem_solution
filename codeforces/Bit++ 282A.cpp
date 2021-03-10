#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,p=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]=='+' || s[2]=='+')
        {
            p+=1;
        }
        else if(s[0]=='-' || s[2]=='-')
        {
            p-=1;
        }
    }
    cout<<p<<endl;
    return 0;
}
