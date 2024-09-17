/*
Write a program in C++ to find the LCM of any two numbers using HCF.
Sample Output:
Input 1st number for LCM: 15
Input 2nd number for LCM: 25
The LCM of 15 and 25 is: 75
*/

#include<iostream>
using  namespace std;

int main()
{
    int num1,num2,hcf=1;
    cout<<"Input 1st number for LCM: ";
    cin>>num1;
    cout<<"Input the 2nd number for LCM: ";
    cin>>num2;

    int j= (num1>num2) ? num1:num2;
    for(int i=1;i<=j;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }

    int lcm=(num1*num2)/hcf;

    cout<<"The LCM of "<<num1<<" and "<<num2<<" is: "<<lcm<<endl;

    return 0;
}