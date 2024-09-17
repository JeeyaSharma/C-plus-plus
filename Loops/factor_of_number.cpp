/*
Write a program in C++ to enter any number and print all factors of the number.
Sample Output:
Input a number: 63
The factors are: 1 3 7 9 21 63
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Input a number: ";
    cin>>num;

    cout<<"The factors are: ";
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}