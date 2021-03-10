#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l,max,count=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    l=sizeof(a)/sizeof(a[0]);
    sort(a,a+l);
    max=a[n-1];
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}
