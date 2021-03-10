#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string h="hello",s;
    int i,j=0;
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(h[j]==s[i])
        {
            j++;
        }
    }
    if(j==5)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
