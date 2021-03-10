#include<iostream>
using namespace std;
const int mx = 2e5 + 10;
LL p[mx],b[mx],a[mx];
int main()
{
    int t;

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>b[i];

    LL maxi = b[1];
    LL pref = b[1];
    a[1] = b[1];

    for(int i=2;i<=n;i++){
        a[i] = maxi+b[i];
        maxi = max(maxi,a[i]);
    }


    for(int i=1;i<=n;i++)cout<<a[i]<<" ";NL;


    return 0;
