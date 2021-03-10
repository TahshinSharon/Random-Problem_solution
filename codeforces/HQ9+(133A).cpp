#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    int i,j,c=0;
    getline(cin,p);
    j=p.size();
    for(i=0;i<j;i++)
    {
        if(((p[i]=='H') || (p[i]=='Q') || (p[i]=='9')) && ((int)p[i]>33 && (int)p[i]<126))
        {
            c=1;
        }
    }
    if(c==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
