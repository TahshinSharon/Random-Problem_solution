#include<iostream>
using namespace std;
int main()
{
    long long n,ans=0,rem,x1=0,x2=0,x3=0,x4=0,x5=0;
    cin>>n;
    if(n>=100){
        x1=n/100;
        rem=n%100;
        x2=rem/20;
        rem=rem%20;
        x3=rem/10;
        rem=rem%10;
        x4=rem/5;
        rem=rem%5;
        x5=rem/1;
    }
    else if(n>=20 && n<100){
        x2=n/20;
        rem=n%20;
        x3=rem/10;
        rem=rem%10;
        x4=rem/5;
        rem=rem%5;
        x5=rem/1;
    }
    else if(n>=10 && n<20)
    {
        x3=n/10;
        rem=n%10;
        x4=rem/5;
        rem=rem%5;
        x5=rem/1;
    }
    else if(n>=5 && n<10){
        x4=n/5;
        rem=n%5;
        x5=rem/1;
    }
    else x5=n/1;
    ans=x1+x2+x3+x4+x5;
    cout<<ans<<endl;
    return 0;
}