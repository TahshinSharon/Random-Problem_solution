#include<iostream>
using namespace std;
int main()
{
    int n,k,ans=0,time=240;
    cin>>n>>k;
    time-=k;
    for(int i=1;i<=n;i++){
        time=time-(5*i);
        if(time<0){
            break;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}