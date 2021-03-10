#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int n,j,c=0;
    cin>>n;
    vector <int> v;
    vector <int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        v.push_back(j);
    }
    for(it=v.begin();it!=v.end();it++)
    {
        if(*it==1)
        {
            c=*it;
        }
    }
    if(c==1)
    {
        cout<<"HARD"<<endl;
    }
    else cout<<"EASY"<<endl;
}
