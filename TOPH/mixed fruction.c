#include<stdio.h>
int main()
{
    int N,D,w;
    scanf("%d %d",&N,&D);
    w=N/D;
    N=N-(D*w);
    printf("%d %d %d",w,N,D);
    return 0;
}
