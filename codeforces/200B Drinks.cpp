#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n],sum=0;
    float ans;
    for(int i=0;i<n;i++){
        cin>>p[i];
        sum=sum+p[i];
    }
    ans=((float)sum/(n*100))*100;
    cout<<ans<<endl;
    return 0;
}