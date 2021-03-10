#include<iostream>
using namespace std;
int main()
{
    int A,i;
    cin>>A;
    for(i=1;i<=A;i++)
    {
        if(A%i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
