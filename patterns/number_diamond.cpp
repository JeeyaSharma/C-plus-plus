#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int num=0;
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<2*i;k++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        int num=0;
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<2*i;k++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}