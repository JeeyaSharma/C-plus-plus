/*
Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34


Input Format

Constraints
0 < N < 100


Output Format

Sample Input
4
Sample Output
0 
1    1 
2    3     5 
8   13    21    34
Explanation
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.
*/

#include<iostream>
using namespace std;
int fib(int n)
{
    int a=0,b=1,c;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        
    }
    return c;
}
int main()
{
    int n;
    cin>>n;

    int fib_num=(n*(n+1))/2;
    int num=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==1 && j==1)
            {
                cout<<"0\t";
            }
            else if(i==2 && j==1)
            {
                cout<<"1\t";
            }
            else
            {
                cout<<fib(num)<<"\t";
                num++;
            }
        }
        cout<<endl;
    }

    return 0;
}