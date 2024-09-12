/*Write a program to print a value if it is even and divisible by 3*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if((num%2==0) && (num%3==0))
    {
        cout<<"Even and Divisible by 3"<<endl;
    }
    else if((num%2==0) && (num%3!=0))
    {
        cout<<"Even but not divisible by 3"<<endl;
    }
    else if((num%2!=0) && (num%3==0))
    {
        cout<<"Not Even but Divisible by 3"<<endl;
    }
    else
    {
        cout<<"Neither Even nor Divisible by 3"<<endl;
    }

    return 0;
}