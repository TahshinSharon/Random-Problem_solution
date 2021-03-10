#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p,q,i,count=0,ans;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        ans=q-p;
        if(ans>=2)
        {
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}
