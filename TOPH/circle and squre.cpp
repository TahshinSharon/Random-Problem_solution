#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int T,A,i;
    float a,p,r;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>A;
        r=sqrt(A);
        r=r/2;
        a=3.141592654*r*r;
        a=A-a;
        p=2*3.141592654*r;
        cout<<fixed<<setprecision(8)<<a<<" "<<p<<endl;
    }
    return 0;
}
