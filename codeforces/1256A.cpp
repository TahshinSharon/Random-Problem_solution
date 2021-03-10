#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q)
    {
        long long int a,b,n,s,l;
        cin>>a>>b>>n>>s;
        if((a*n + b )>=s && b>=s%n){cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
        q--;

    }
    return 0;
}
