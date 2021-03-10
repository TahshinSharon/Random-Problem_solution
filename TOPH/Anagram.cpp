#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char A[100],B[100],i,j,a,b,count=0;
    cin>>A>>B;
    a=strlen(A);
    b=strlen(B);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(A[i]==B[j])
            {
                count=count+1;
            }
        }
    }
    if(count==b)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    return 0;
}
