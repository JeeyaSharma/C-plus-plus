/*
Write a program in C++ to check whether a number can be expressed as the sum of two.
Sample Output:
Input a positive integer: 20
20 = 3 + 17
20 = 7 + 13
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Input a positive integer: ";
    cin>>num;

    bool foundpair=false;

    for(int i=1;i<=num/2;i++)
    {
        if(num + (num-i) == num)
            {
                cout<<num<<" = "<<i<<" + "<<num-i<<endl;
                foundpair=true;
            }
    }

    if(!foundpair)
    {
        cout<<"The number cannot be expressed as a sum of two positive numbers"<<endl;
    }

    return 0;
}