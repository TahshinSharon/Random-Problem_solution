#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0 && i!=n)
        {
            cout<<"I hate that"<<" ";
        }
        if(i%2!=0 && i==n)
        {
            cout<<"I hate it"<<endl;
        }
        if(i%2==0 && i!=n)
        {
            cout<<"I love that"<<" ";
        }
        if(i%2==0 && i==n)
        {
            cout<<"I love it"<<endl;
        }
    }
    return 0;
}
