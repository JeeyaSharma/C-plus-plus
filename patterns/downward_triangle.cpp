/*
Write a program to print given pattern by taking input N.

Input Format
The first line contains an integer N.

Constraints
Output Format
Display the pattern as result.

Sample Input
6
Sample Output
* * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<n-i;k++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }


    return 0;
}