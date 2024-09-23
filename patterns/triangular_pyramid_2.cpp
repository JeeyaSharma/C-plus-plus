/*
Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
            1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4
Explanation
Each number is separated from other by a tab.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num=i;
        for(int j=1;j<=n-i;j++)
        {
            cout<<"\t";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<num<<"\t";
            num+=1;
        }
        num-=2;
        for(int a=1;a<i;a++)
        {
            cout<<num<<"\t";
            num-=1;
        }
        

        cout<<endl;
    }

    return 0;
}