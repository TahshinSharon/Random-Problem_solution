#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    while(k--)
    {
        n%10!=0?n-=1:n/=10;
    }
    cout<<n<<endl;
    return 0;
}
