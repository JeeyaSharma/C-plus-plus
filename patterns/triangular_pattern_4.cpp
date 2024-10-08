/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
*/

// Do this without using external variable

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<i+j<<" ";
        }

        cout<<endl;
    }
    return 0;
}