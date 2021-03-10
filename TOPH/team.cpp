#include<iostream>
using namespace std;
int main()
{
    int n,i,out=0;
    int a[3],b[3],c[3];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
    }
    for(i=0;i<n;i++)
    {
        if((a[i] && b[i] || c[i]) || (a[i] || b[i] && c[i]) || (a[i] && c[i] || b[i]))
        {
            out=out+1;
        }
    }
    cout<<out<<endl;
    return 0;
}
