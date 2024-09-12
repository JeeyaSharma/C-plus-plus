#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter first number= ";
    cin>>num1;
    cout<<"Enter second number= ";
    cin>>num2;

    cout<<"Equals to: "<<(num1==num2)<<endl;
    cout<<"Not Equal to: "<<(num1!=num2)<<endl;
    cout<<"Greater than: "<<(num1>num2)<<endl;
    cout<<"Less than: "<<(num1<num2)<<endl;
    cout<<"Greater than or equals to: "<<(num1>=num2)<<endl;
    cout<<"Less than or equals to: "<<(num1<=num2)<<endl;
    
    return 0;
}