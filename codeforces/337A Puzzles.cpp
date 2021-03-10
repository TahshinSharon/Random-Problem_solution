#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int n,m,t,min;
    vector<int> v;
    vector <int>::iterator it;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    min=v[n-1]-v[0];
    for (int i = 0; i <= m-n; i++)
        {
            if (v[n+i-1] - v[i] < min)
			{
				min=v[n+i-1] - v[i];
			}

		}
		cout<<min<<endl;

    return 0;
}
