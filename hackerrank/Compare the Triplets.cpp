#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],c=0,d=0,i,j;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(j=0;j<3;j++)
    {
        if(a[j]>b[j] && a[j]!=b[j])
        {
            c++;
        }
        else if(a[j]<b[j] && a[j]!=b[j])
        {
            d++;
        }
    }
    cout<<c<<" "<<d<<endl;
    return 0;
}
