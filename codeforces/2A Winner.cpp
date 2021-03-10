#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    multimap <int,string> m;
    multimap <int,string>::iterator it;
    int n,sc;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        cin>>sc;
        m.insert(pair<int,string>(sc,s));
    }
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"-"<<it->second<<endl;
    }
    it=m.end();
    it++;
    cout<<it->second<<endl;
    return 0;
}