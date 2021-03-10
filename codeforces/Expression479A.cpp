#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,A,B,C,D,E,F,m;
    cin>>a>>b>>c;
    A=a+b*c;
    B=a*(b+c);
    C=a*b*c;
    D=(a+b)*c;
    E=a+b+c;
    F=(a*b)+c;

    m=max(A,max(B,max(C,max(D,max(E,F)))));
    cout<<m<<endl;
    return 0;
}
