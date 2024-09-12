/*Write a program to divide people into 3 age groups depending upon their age:
below 12: Child
between 12 and 18: Teenager
Above 18: Adult*/

#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter age: ";
    cin>>age;

    if(age<12)
    {
        cout<<"Child"<<endl;
    }
    else if(age>12 && age<18)
    {
        cout<<"Teenager"<<endl;
    }
    else
    {
        cout<<"Adult"<<endl;
    }

    return 0;
}