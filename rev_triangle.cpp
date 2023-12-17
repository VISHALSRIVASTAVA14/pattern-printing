#include<iostream>
using namespace std;

int main()
{
    int r,i,j;
    cout<<"enter the number of rows:";
    cin>>r;
    for(i=r;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}