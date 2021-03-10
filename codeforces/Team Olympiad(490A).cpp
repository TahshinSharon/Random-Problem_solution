#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t[n],count1=0,count2=0,count3=0,ans;
    int c1[n],c2[n],c3[n],i,j,k=0,l=0,m=0;
    for(i=0;i<n;i++)
    {
        cin>>t[i];
        if(t[i]==1)
        {
            count1++;
            c1[k]=(i+1);
            k++;
        }
        else if(t[i]==2)
        {
            count2++;
            c2[l]=(i+1);
            l++;
        }
        else if(t[i]==3)
        {
            count3++;
            c3[m]=(i+1);
            m++;
        }
    }
    if((count1==0) || (count2==0) || (count3==0))
    {
        int c=0;
        cout<<c<<endl;
    }
    else
    {
        ans=min(count1,min(count2,count3));
        cout<<ans<<endl;
        for(j=0;j<ans;j++)
        {
            cout<<c1[j]<<endl;
            cout<<c2[j]<<endl;
            cout<<c3[j]<<endl;
        }
    }
    return 0;
}
