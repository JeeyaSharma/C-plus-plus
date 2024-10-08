/*
Enter the Number of rows - 6
Butterfly Pattern of 6 rows.
*                         * 
* *                     * * 
* * *                 * * * 
* * * *             * * * * 
* * * * *         * * * * * 
* * * * * *     * * * * * * 
* * * * * * * * * * * * * * 
* * * * * *     * * * * * * 
* * * * *         * * * * * 
* * * *             * * * * 
* * *                 * * * 
* *                     * * 
*                         * 

WAP to print a pattern this way
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=n-i+1;k++)
        {
            cout<<" ";
        }
        for(int a=1;a<=n-i+1;a++)
        {
            cout<<" ";
        }
        for(int b=1;b<=i;b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=2*n+2;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=i+1;k++)
        {
            cout<<" ";
        }
        for(int a=1;a<=i+1;a++)
        {
            cout<<" ";
        }
        for(int b=1;b<=n-i;b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}