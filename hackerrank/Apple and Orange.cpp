#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,res1=0,res2=0,dis1,dis2,die1,die2;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int da[m],db[n],dbs;
    for(int i=0;i<m;i++)
    {
        cin>>da[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>db[n];
    }
    for(int i=0;i<m;i++)
    {
        dis1=0;
        dis1=s-a;
        dis2=t-a;
        if((da[i]>=dis1) && (da[i])<=dis2)
        {
            res1=res1+1;
        }
    }
    for(int j=0;j<n;j++)
    {
        die1=0;
        die1=((b-t)*-1);
        die2=((b-s)*-1);
        if((db[j]<=die1) && (db[j]>=die2))
        {
            res2=res2+1;
        }
    }
    cout<<res1<<endl;
    cout<<res2<<endl;
    return 0;
}
