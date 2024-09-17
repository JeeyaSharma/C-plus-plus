#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input number of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<"*";
            }
        }

        else
        {
            for(int j=1;j<=n;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=n-i+1;k++)
        {
            cout<<"*";
        }
        }

        cout<<endl;
    }

    return 0;
}