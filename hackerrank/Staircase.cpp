#include<iostream>
using namespace std;
int main()
{
    int n;
    string a=" ",b="#";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            cout<<" ";
        }
        cout<<b<<endl;
        b=b+"#";
    }
    return 0;
}
