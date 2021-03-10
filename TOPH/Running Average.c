#include<stdio.h>
int main()
{
    int N,a[100],i;
    float b[100],sum=0.0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
        sum=sum+a[i];
        b[i]=sum/i;
    }
    for(i=1;i<=N;i++)
    {
        printf("%.3f\n",b[i]);
    }
    return 0;
}

