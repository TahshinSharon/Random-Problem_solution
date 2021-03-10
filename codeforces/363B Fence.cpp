#include<iostream>
#include<vector>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    vector<int> v,v2;
    multimap <int,int> m;
    multimap <int,int>::iterator it;
    int n,k,e,windowsum=0,j=1;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    for(int i=0;i<k;i++)
    {
        windowsum+=v[i];
    }
    m.insert(pair<int,int>(windowsum,j));
    for(int en=k; en<v.size();en++)
    {
        j++;
        windowsum+=v[en]-v[en-k];
        m.insert(pair<int,int>(windowsum,j));
    }
    it=m.begin();
    cout<<it->second<<endl;
    return 0;
}