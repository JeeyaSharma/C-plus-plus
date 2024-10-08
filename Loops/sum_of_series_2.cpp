/*
Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
Sample Output:
Input the value for nth term: 5
1*1 = 1
2*2 = 4
3*3 = 9
4*4 = 16
5*5 = 25
The sum of the above series is: 55
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of nth term: ";
    cin>>n;

    int sum=0;

    for(int i=1;i<=n;i++)
    {
        int product=i*i;
        sum+=product;
    }

    cout<<"Sum of given series= "<<sum<<endl;

    return 0;
}