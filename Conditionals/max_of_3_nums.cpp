//Find the maximum of three numbers using if-else statements

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    cout<<"Enter Third Number: ";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<a<<" is the Largest number"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is the Largest number"<<endl;
    }
    else if(c>a && c>b)
    {
        cout<<c<<" is the Largest number"<<endl;
    }
    else if(a==b && a>c)
    {
        cout<<a<<" is the Largest number"<<endl;
    }
    else if(a==c && a>b)
    {
        cout<<a<<" is the Largest number"<<endl;
    }
    else if(b==c && b>a)
    {
        cout<<b<<" is the Largest number"<<endl;
    }
    else
    {
        cout<<"All numbers are equal"<<endl;
    }

    return 0;
}