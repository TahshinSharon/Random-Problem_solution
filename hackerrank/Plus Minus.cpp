#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    float a=0,b=0,c=0,e,f,g;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            a++;
        }
        else if(arr[i]<0)
        {
            b++;
        }
        else if(arr[i]==0)
        {
            c++;
        }
    }
    e=float(a/n);
    f=float(b/n);
    g=float(c/n);
   printf("%.6lf\n",e);
   printf("%.6lf\n",f);
   printf("%.6lf\n",g);
    return 0;
}
