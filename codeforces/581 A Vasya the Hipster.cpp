#include<iostream>
using namespace std;
int main()
{
    int a,b,ans1=0,ans2=0,temp;
    cin>>a>>b;
    if(a>=b){
        ans1=b;
        temp=a-b;
        ans2=temp/2;
    }
    else if(a<=b){
        ans1=a;
        temp=b-a;
        ans2=temp/2;
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}