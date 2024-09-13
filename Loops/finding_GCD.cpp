//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

#include<iostream>
using namespace std;

int main()
{
    int num1,num2,gcd;

    cin>>num1;
    cin>>num2;

    if(num1 > num2)
    {
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
    }

    for(int i=2;i<=num2;i++)
    {
        if((num1 % i == 0) && (num2 % i == 0))
        {
            gcd=i;
            break;
        }
    }

    cout<<"GCD: "<<gcd<<endl;

    return 0;
}