/*
Write a program in C++ to calculate the product of the digits of any number.
Sample Output:
Input a number: 3456
The product of digits of 3456 is: 360
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input a number: ";
    cin>>n;

    int product=1;
    int r;

    while(n!=0)
    {
        r=n%10;
        product*=r;
        n/=10;
    }

    cout<<"The product of digits of "<<n<<" is: "<<product<<endl;

    return 0;
}