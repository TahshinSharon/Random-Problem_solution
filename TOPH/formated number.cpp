#include<iostream>
using namespace std;
int main()
{
    int k1,k2,k3;
    int n;
    cin>>n;
    if(n<200000000)
    {
        k3=n%1000;
        n=n/1000;
        k2=n%1000;
        n=n/1000;
        k1=n;
        cout<<k1<<","<<k2<<","<<k3<<endl;
    }
    return 0;
}
