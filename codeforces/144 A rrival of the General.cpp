#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans,mn=999999999,mx=-121313117,i1,i2;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    for(int i=n;i>0;i--){
        if(a[i]==mn){
            i1=i;
            break;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==mx){
            i2=i;
            break;
        }
    }
    ans=(n-i1)+(i2-1);
    if(i1<i2) ans--;
    cout<<ans<<endl;
    return 0;
}