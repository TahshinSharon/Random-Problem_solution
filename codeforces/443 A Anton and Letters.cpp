#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int ans=0,l;
    l=s.length();
    sort(s.begin(),s.end());
    for(int i=0;i<l;i++)
    {
        if(s[i]>=92 && s[i]<=122)
        {
            if(s[i]!=s[i+1])
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}