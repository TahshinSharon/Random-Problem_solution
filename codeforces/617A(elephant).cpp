#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x%5!=0)
    {
        cout<<x/5+1<<endl;
    }
    else if(x%5==0)
    {
        cout<<x/5<<endl;
    }
    return 0;
}
