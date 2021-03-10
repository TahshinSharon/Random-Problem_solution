#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j,sum,k,b=0,c=0,d;
    cin>>n;
    k=n-1;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                b+=a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        c+=a[i][k--];
    }
    d=(b-c);
    d=abs(d);
    cout<<d<<endl;
    return 0;
}
