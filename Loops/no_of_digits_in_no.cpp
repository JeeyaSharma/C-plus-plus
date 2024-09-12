// Finding the number of digits in a number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int digits=0;
    while(n!=0)
    {
        n/=10;
        digits++;
    }

    cout<<"Number of digits: "<<digits<<endl;

    return 0;
}