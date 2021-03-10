#include<iostream>
using namespace std;
int main()
{
    int N,count=0,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            count=count+1;
        }
    }
    count=count-1;
    cout<<count;
    return 0;
}
