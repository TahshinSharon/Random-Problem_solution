#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,r,count=0,sum=0,av;
    cin>>n;
    int m[n],s[n];
    for(i=1;i<=n;i++)
    {
        cin>>m[i]>>s[i];
    }
    av=sum/n;
    for(j=1;j<=n;j++)
    {
        r=(m[j]*100)/s[j];
            if(m[j]>=150 && r>=70)
            {
                if(m[j]>=av)
                {
                    count=count+1;
                }
            }

    }
    cout<<count<<endl;
    return 0;
}
