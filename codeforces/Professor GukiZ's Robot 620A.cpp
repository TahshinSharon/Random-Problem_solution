#include<iostream>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
    ll x1,y1,x2,y2,a,b;
    cin>>x1>>y1;
    cin>>x2>>y2;
    a=abs(x1-x2);
    b=abs(y1-y2);
    cout<<max(a,b)<<endl;
    return 0;
}
