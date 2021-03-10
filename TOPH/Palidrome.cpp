#include<bits/stdc++.h>
using namespace std;
int main()
{
    string r,s;
    getline(cin,s);
    r=s;
    reverse(r.begin(),r.end());
    if(r==s)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    return 0;
}
