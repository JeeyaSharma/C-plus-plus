/*
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format
Constraints
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output
*	*	*       *      *		  
*	*	        *      *
* 	                       *
* 	*               *      *
* 	*	*       *      *	
Explanation
Each '*' is separated from other by a tab.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int m=(n+1)/2;
    int ie,je;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=m)
            {
                ie=i;
            }
            else
            {
                ie=n-i+1;
            }
            if(j<=m)
            {
                je=j;
            }
            else
            {
                je=n-j+1;
            }
            if(ie+je<=m+1)
            {
                cout<<"*"<<"\t";
            }
            else
            {
                cout<<" "<<"\t";
            }
        }
        cout<<endl;
    }

    return 0;
}