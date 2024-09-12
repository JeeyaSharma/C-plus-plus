#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value of a= ";
    cin>>a;
    cout<<"Enter value of b= ";
    cin>>b;
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    cout<<"Now swapping the two numbers:"<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    return 0;
}