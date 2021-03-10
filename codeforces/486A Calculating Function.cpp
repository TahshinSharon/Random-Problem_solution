#include<iostream>
using namespace std;
int main()
{
    long long int n,ans;
    cin>>n;
    if(n%2==0)
    {
        ans=(n/2);
    }
    else if(n%2!=0)
    {
        ans=(n+1)/2;
        ans=ans*(-1);
    }
    cout<<ans<<endl;
    return 0;
}