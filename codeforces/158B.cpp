#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    double sum=0.0;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        sum=sum+(double)s[i];
    }
    sum=sum/4.0;
    if(sum==(int)sum)
    {
        cout<<sum<<endl;
    }
    else
    {
        sum=(int)sum+1;
        cout<<sum<<endl;
    }
    return 0;
}
