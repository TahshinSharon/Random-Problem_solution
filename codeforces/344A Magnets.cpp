#include<iostream>
using namespace std;
int main()
{
    int n,ans=1;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        if(p[i]==p[i+1]){
            ans=ans;
        }
        else ans+=1;;
    }
    cout<<ans-1<<endl;
    return 0;
}