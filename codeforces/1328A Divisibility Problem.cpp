#include<iostream>
using namespace std;
int main()
{
    int t,a,b,ans;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else
        {
            ans=(b-a%b);
            cout<<ans<<endl;
        }
        
    }
    return 0;
}