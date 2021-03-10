#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[5],l;
    long long min=0,max=0;
    l=sizeof(a)/sizeof(a[0]);
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    sort(a,a+l);
    for(j=0;j<4;j++)
    {
        min+=a[j];
    }
    for(j=4;j>0;j--)
    {
        max+=a[j];
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
