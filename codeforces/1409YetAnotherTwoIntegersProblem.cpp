#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int a,b,dif,ans;
    while(t--){
        cin>>a>>b;
        dif=b-a;
        dif=llabs(dif);
        cout<<dif/10+(dif%10!=0);
        cout<<endl;
    }
    return 0;
}