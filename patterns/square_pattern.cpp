/*
Write a program to print square pattern by taking input N.

Input Format
The first line contains an integer N.

Constraints
Output Format
Display the pattern as result.

Sample Input
5
Sample Output
1 2 3 4 5 
2 2 3 4 5 
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<j<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}