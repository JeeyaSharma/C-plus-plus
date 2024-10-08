/*
WAP to print the following pattern

1 1 1 1
  2 2 2
    3 3 
      4
      1
    2 2
  3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=n-i+1;k++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}