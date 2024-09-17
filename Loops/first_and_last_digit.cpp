/*
Write a program in C++ to find the first and last digits of a number.
Sample Output:
Input any number: 5679
The first digit of 5679 is: 5
The last digit of 5679 is: 9
*/

#include<iostream>
using namespace std;

int no_of_digits(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cout<<"Input any number: ";
    cin>>num;

    int r;

    int digit=no_of_digits(num);
    int last_digit,first_digit;

    for(int i=1;i<=digit;i++)
    {
        if(i==1)
        {
            last_digit=num%10;
        }
        else if(i==digit)
        {
            first_digit=num%10;
        }
        num/=10;
    }

    cout<<"First digit of the number: "<<first_digit<<endl;
    cout<<"Last digit of the number: "<<last_digit<<endl;

    return 0;
    
}