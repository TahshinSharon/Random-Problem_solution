#include<stdio.h>
int main()
{
    char a[100],ch;
    int n,i;
    scanf("%d",&n);
    gets(a);
    gets(a);
    for(i=0;a[i] != NULL ;i++)
    {
        ch=a[i];
        if(ch>='a' && ch<='z')
        {
            ch=ch-n;
            if(ch< 'a')
            {
                ch=ch+ 'z' - 'a'+1;
            }
            a[i]=ch;
        }
        else if(ch>= 'A' && ch<= 'Z')
        {
            ch=ch-n;
            if(ch< 'A')
            {
                ch=ch+ 'Z'- 'A'+1;
            }
            a[i]=ch;
        }
    }
    printf("%s",a);
    return 0;
}
