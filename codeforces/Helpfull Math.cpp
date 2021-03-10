#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100],temp;
    int i,j;
    cin>>s;
    j=strlen(s);
    while(j>=3)
    {
    for(i=0;i<j-1;i++)
    {
        if(s[i]>s[i+2])
        {
            temp=s[i];
            s[i]=s[i+2];
            s[i+2]=temp;
        }
        i=i+1;
    }
    j=j-2;
    }
    cout<<s;
    return 0;
}
