#include<iostream>
using namespace std;
int main()
{
    int t,x,y,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        ans=(x+y)/2;
        if(ans%2==0)
        {
            cout<<"Sadia will be happy."<<endl;
        }
        else cout<<"Oops!"<<endl;
    }
    return 0;
}