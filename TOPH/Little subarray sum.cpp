#include<iostream>
using namespace std;
int main()
{
    int N,A,B,i,s=0;
    cin>>N;
    int a[N];
    cin>>A>>B;
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(i=A;i<=B;i++)
    {
        s=s+a[i];
    }
    cout<<s<<endl;
}
