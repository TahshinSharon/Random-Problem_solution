#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n],a[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(h[j]==a[k])
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}