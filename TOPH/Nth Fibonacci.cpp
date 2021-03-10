#include<iostream>
using namespace std;
int fibo_series(int N);
int main()
{
    int N,fib;
    cin>>N;
    fib=fibo_series(N);
    cout<<fib<<endl;
    return 0;
}
int fibo_series(int N)
{
    if(N==0)
    {
        return 0;
    }
    else if(N==1)
    {
        return 1;
    }
    else
    return (fibo_series(N-1)+fibo_series(N-2));
}
