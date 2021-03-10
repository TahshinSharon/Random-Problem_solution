#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int k,w,i,j=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        j=j+(i*k);
    }
    j=j-n;
    if(j>0)
    {
        cout<<j<<endl;
    }
    else cout<<0<<endl;
}
