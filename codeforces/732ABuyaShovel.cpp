#include<iostream>
using namespace std;
int main()
{
    int k,r,rem,ans;
    cin>>k>>r;
    for(int i=1;;i++){
        rem=(k*i)%10;
        if(rem==r || rem==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}