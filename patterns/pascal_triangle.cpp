/*
Take N (number of rows), print the following pattern (for N = 6)
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
6
Sample Output
1  
1	1  
1	2	1  
1	3	3	1  
1	4	6	4	1  
1	5	10	10	5	1
Explanation
Each number is separated from other by a tab.
*/

#include<iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    while(n>=1)
    {
        fact*=n;
        n--;
    }

    return fact;
}
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                cout<<"1 ";
            }
            else if(j==1 || j==i-1)
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<fact(i)/((fact(i-j))*(fact(j)))<<" ";
            }
        }

        cout<<endl;
    }

    return 0;

}