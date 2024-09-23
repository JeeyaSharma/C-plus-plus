/*
Write a program to print given pattern by taking input N.

Input Format
The first line contains an integer N.

Constraints
Output Format
Display the pattern as result.

Sample Input
5
Sample Output
1 
1 4 
1 4 9 
1 4 9 16 
1 4 9 16 25 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input a number: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j*j;
        }

        cout<<endl;
    }

    return 0;
}