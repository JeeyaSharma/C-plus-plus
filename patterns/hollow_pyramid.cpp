#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            if(i==1 || i==n || k==1)
            {
                cout<<i;
            }
            else
            {
                cout<<" ";
            }
        }

        for(int a=i-1;a>=1;a--)
        {
            if(a==1 || a==n-1 || i==n)
            {
                cout<<i;
            }

            else
            {
                cout<<" ";
            }
        }

        cout<<endl;
    }
}