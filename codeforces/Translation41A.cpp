#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    int result;
    getline(cin,s1);
    getline(cin,s2);
    reverse(s1.begin(),s1.end());
    result=s1.compare(s2);
    if(result==0)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
