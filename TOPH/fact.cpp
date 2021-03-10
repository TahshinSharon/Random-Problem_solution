#include<iostream>
using namespace std;
int main()
{
    int n,f=1,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    f=f%10000;
    cout<<f<<endl;
    return 0;
}
