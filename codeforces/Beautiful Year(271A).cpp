#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,a,b,c,d,y2;
    cin>>y;
    while(y++)
    {
        a=y%10;
        y2=y/10;
        b=y2%10;
        y2=y2/10;
        c=y2%10;
        y2=y2/10;
        d=y2;
        if(a!=b && b!=c && c!=d && a!=d && a!=c && b!=d)
        {
            cout<<y<<endl;
            y=0;
        }
    }
    return 0;
}
