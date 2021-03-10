#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,p,q;
    set<int>s;
    cin>>n;
    cin>>p;
    int pa[p];
    for(int i=0;i<p;i++)
    {
        cin>>pa[i];
        s.insert(pa[i]);
    }
    cin>>q;
    int qa[q];
    for(int i=0;i<q;i++)
    {
        cin>>qa[i];
        s.insert(qa[i]);
    }

    if(s.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}