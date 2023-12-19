#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter a number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*(i)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    int a=1;
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=a;j++)
        {
            cout<<" ";
        }
        for(j=2*(i)-1;j>=1;j--)
        {
            cout<<"*";   
        }
        cout<<"\n";
        a++;
    }
}