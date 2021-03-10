#include<iostream>
using namespace std;
int main()
{
    int x[5][5],i,j,count=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>x[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(x[i][j]==1 && i<2)
            {
                x[i+1][j]=x[i][j];
                count=count+1;
            }
            else if(x[i][j]==1 && i>2)
            {
                x[i-1][j]=x[i][j];
                count=count+1;
            }
            if(x[i][j]==1 && j<2)
            {
                x[i][j+1]=x[i][j];
                count=count+1;
            }
            else if(x[i][j]==1 && j>2)
            {
                x[i][j-1]=x[i][j];
                count=count+1;
            }
        }
    }
    if(x[2][2]==1 && i==2 && j==2)
        {
            cout<<count<<endl;
    }
    return 0;
}
