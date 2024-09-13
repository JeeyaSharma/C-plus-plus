/*
Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
Sample Output:
Input the value for nth term: 5
1/1^1 = 1
1/2^2 = 0.25
1/3^3 = 0.037037
1/4^4 = 0.00390625
1/5^5 = 0.00032
The sum of the above series is: 1.29126
*/

#include<iostream>
using namespace std;

int power(int n, int exp)
{
    int product=1;
    for(int i=1;i<=exp;i++)
    {
        product*=n;
    }

    return product;
}

int main()
{
    int n;
    cout<<"Enter value for nth term: ";
    cin>>n;

    float sum;
    float division;

    for(int i=1;i<=n;i++)
    {
        division=power(i,i);
        sum+=(1/division);
    }

    cout<<"Sum of the series= "<<sum<<endl;

    return 0;
}