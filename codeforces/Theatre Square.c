#include<stdio.h>
int main()
{
    long long int n,m,a,i=0,j=0;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(n%a==0){
        i=n/a;
    }
    else i=(n/a)+1;
    if(m%a==0){
        j=m/a;
    }
    else j=(m/a)+1;
    printf("%lld\n",(i*j));
    return 0;
}
