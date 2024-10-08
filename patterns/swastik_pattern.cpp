/*
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

Input Format
Enter value of N ( >=5 )


Constraints
5 <= N <= 99


Output Format
Print the required pattern.


Sample Input
7
Sample Output
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Explanation
Catch the pattern for the corresponding input and print it accordingly.
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
            if(i==(n/2 +1) || j==(n/2 +1))
            {
                cout<<"*";
            }
            else if((j==1 && i<=n/2 +1) || (i==1 && j>= n/2 +1))
            {
                cout<<"*";
            }
            else if((i==n && j<=n/2) || (i>n/2 +1 && j==n))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}