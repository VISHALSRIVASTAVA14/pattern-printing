#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;
    cout<<"enter the number of rows:";
    cin>>r;
    cout<<"enter the number of columns:";
    cin>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1 || i==r)
            {
                cout<<j;
            }
            else
            {
                if(j==1 || j==c)
                {
                    cout<<j;
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }
}