/*
Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
Sample Output:
Input the value for nth term: 5
1 = 1
1+2 = 3
1+2+3 = 6
1+2+3+4 = 10
1+2+3+4+5 = 15
The sum of the above series is: 35
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of nth term: ";
    cin>>n;

    int total_sum=0;

    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<=i;j++)
        {
            sum+=j;
        }

        total_sum+=sum;
    }

    cout<<"The sum of series: "<<total_sum<<endl;

    return 0;
}