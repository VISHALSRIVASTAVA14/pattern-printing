#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter the number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<j;
        }
        for(j=1;j<=(i-1);j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}