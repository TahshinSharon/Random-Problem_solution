#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a=0,b=1;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        a=((a+b)%n);
        b++;
        cout<<a+1<<' ';
    }
    cout<<endl;

    return 0;
}
