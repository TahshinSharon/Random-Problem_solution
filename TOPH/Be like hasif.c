#include<stdio.h>
int main()
{
    int i,left,mid,right,n,x,A[100],temp=0;
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        A[i]=i+1;
    }
    scanf("%d",&x);
    left=0;
    right=n-1;
    while(left<=right){
        mid=(left+right)/2;
        if(A[mid]==x){
                if(temp==0)
                {
                    printf("%d",temp+1);
                }
                else printf("%d\n",temp);
        }
        if(A[mid]<x){
            left=mid+1;
        }else{
            right=mid-1;
        }
        temp=temp+1;
    }
    return 0;
}
