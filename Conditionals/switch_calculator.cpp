//Create a calculator using switch statement to perform basic arithmatic operations

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter First number: ";
    cin>>num1;
    cout<<"Enter Second number: ";
    cin>>num2;

    char sign;
    cout<<"Enter the arithmatic operation to be performed: ";
    cin>>sign;

    switch(sign)
    {
        case '+':
        {
            cout<<"Addition= "<<num1+num2<<endl;
            break;
        }
        case '-':
        {
            cout<<"Subtraction= "<<num1-num2<<endl;
            break;
        }
        case '*':
        {
            cout<<"Multiplication= "<<num1*num2<<endl;
            break;
        }
        case '/':
        {
            cout<<"Division= "<<num1/num2<<endl;
            break;
        }
        case '%':
        {
            cout<<"Remainder= "<<num1%num2<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid Operator Entered"<<endl;
        }
    }

    return 0;
}