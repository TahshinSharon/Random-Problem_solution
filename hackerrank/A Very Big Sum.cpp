#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    long long int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    cout<<sum<<endl;
    return 0;
}
