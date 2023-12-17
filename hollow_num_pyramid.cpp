#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter the number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*(i)-1;j++)
        {
            if(i!=n)
            {
                if(j==1 || j==2*(i)-1)
                {
                    cout<<i;
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                cout<<i;
            }
        }
        cout<<"\n";
    }
}