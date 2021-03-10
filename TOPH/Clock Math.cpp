#include<bits/stdc++.h>
using namespace std;
double clock_math1(double H,double M)
{
    return (360-((30*H)-(5.5*M)));
}
double clock_math2(double H,double M)
{
    return ((30*H)-(5.5*M));
}
int main()
{
    double H,M;
    double result;
    cin>>H>>M;
    result=clock_math1(H,M);
    if(result>180)
    {
        result=clock_math2(H,M);
    }
    printf("%.5lf",result);
    return 0;
}
