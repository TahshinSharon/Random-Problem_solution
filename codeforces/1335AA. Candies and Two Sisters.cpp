#include<iostream>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long ans=0;
        if(n%2!=0)
        {
            ans=n/2;
        }
        else ans=n/2-1;
        cout<<ans<<endl;
    }
    return 0;
}