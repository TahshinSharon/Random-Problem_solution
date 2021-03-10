#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,now=1,ans=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>k;
        int d=k-now;
        if(d<0) d+=n;
        ans+=d;
        now=k;
    }
    cout<<ans<<endl;
    return 0;
}