#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    vector <int> v;
    vector <int>::iterator it;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
}