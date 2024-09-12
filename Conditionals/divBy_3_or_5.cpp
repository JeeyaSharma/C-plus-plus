/*Write a program to print the value if it is divisible by 3 or 5*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if((num%3==0) || (num%5==0))
    {
        cout<<"Divisible by 5 or 3"<<endl;
    }
    else
    {
        cout<<"Not divisible by 5 or 3"<<endl;
    }

    return 0;
}