#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d\n",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]+b[i]+c[i])>=2)
        {
            sum=sum+1;
        }
    }
    printf("%d\n",sum);
    return 0;
}
