#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int grade[n],ans[n],r,k;
    for(int i=0;i<n;i++)
    {
        cin>>grade[i];
    }
    for(int j=0;j<n;j++)
    {
        if(grade[j]<38)
        {
            ans[j]=grade[j];
        }
        else if(grade[j]>=38)
        {
            r=grade[j]/5;
            r=(r+1)*5;
            k=r-grade[j];
            if(k<3)
            {
                ans[j]=r;
            }
            else ans[j]=grade[j];
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<ans[j]<<endl;
    }
    return 0;
}
