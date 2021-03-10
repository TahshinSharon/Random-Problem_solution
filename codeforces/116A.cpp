#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cin>>n;
    int a[n],b[n],s[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        c=c+b[i]-a[i];
        s[i]=c;
    }
    c=s[0];
    for(j=1;j<n;j++)
    {
        if(c<s[j])
        {
            c=s[j];
        }
    }
    cout<<c<<endl;
    return 0;
}
