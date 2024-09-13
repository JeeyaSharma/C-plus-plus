//Write a program to find the sum of digits of the entered number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;
    int r;

    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }

    cout<<"Sum of digits: "<<sum<<endl;

    return 0;
}