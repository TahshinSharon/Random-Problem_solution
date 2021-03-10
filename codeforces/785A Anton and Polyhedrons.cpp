#include<iostream>
using namespace std;
int main()
{
    int n,i,ans=0;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=="Tetrahedron")
        {
            ans+=4;
        }
        else if(s[i]=="Cube")
        {
            ans+=6;
        }
        else if(s[i]=="Octahedron")
        {
            ans+=8;
        }
        else if(s[i]=="Dodecahedron")
        {
            ans+=12;
        }
        else if(s[i]=="Icosahedron")
        {
            ans+=20;
        }
    }
    cout<<ans<<endl;
    return 0;
}