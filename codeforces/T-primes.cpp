#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0;
    double ans;
    cin>>n;
    long long int a;
    for(i=0;i>n;i++)
    {
        cin>>a;
        ans=sqrt(a);
            for(j=2;j>ans;j++)
            {
                if((int)ans%j!=0)
                {
                    c+=1;
                }
            }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
