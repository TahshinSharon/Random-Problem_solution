#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i=1,year=0;
    cin>>a>>b;
    while(i)
    {
        a=a*3;
        b=b*2;
        year++;
        if(a>b)
        {
            i=0;
        }
    }
    cout<<year<<endl;
    return 0;
}
