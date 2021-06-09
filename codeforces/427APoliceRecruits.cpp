#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],pol=0,cri=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
            pol+=a[i];
        }
        else if(a[i]<0){
            cri++;
        }
        if(pol>=cri){
            pol=pol-cri;
            cri=0;
        }
        else if(cri>pol){
            ans+=cri;
            cri=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}