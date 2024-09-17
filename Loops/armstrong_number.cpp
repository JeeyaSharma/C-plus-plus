/*
Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

Input Format
Single line input containing an integer

Constraints
0 < N < 1000000000

Output Format
Print boolean output for each testcase.
"true" if the given number is an Armstrong Number, else print "false".

Sample Input
371
Sample Output
true
*/

#include<iostream>
using namespace std;

int count_digits(int n)
{
    int count=0;
    while(n!=0)
    {
        count++;
        n/=10;
    }

    return count;
}

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
    int num;
    cin>>num;

    int digits=count_digits(num);
    int temp=num;
    int armstrong=0;
    int remainder;
    while(temp!=0)
    {
        remainder=temp%10;
        int term=power(remainder,digits);
        armstrong+=term;
        temp/=10;
    }

    if(armstrong == num)
    {
        cout<<"true"<<endl;
    }

    else
    {
        cout<<"false"<<endl;
    }
}