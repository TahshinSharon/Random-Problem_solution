#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0,z=0,i1,i2,i3;
    cin>>n;
    while(n--)
    {
        cin>>i1>>i2>>i3;
        x+=i1;
        y+=i2;
        z+=i3;
    }
    if(x==0 && y==0 && z==0)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
