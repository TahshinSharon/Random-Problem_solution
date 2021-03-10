#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x[4],an=0;
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
    }
    sort(x,x+4);
    for(int j=0;j<3;j++)
    {
        if(x[j]==x[j+1])
        {
            an++;
        }
    }
    cout<<an<<endl;
    return 0;
}