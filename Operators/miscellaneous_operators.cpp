#include<iostream>
using namespace std;

int main()
{
    int a=4;
    cout<<"Size of a= "<<sizeof(a)<<endl; //returns 4

    char b='a';
    cout<<"Size of b= "<<sizeof(b)<<endl; //returns 1

    //Ternary operator
    (a%2==0) ? (cout<<"Ternary True printed"<<endl) : (cout<<"Ternary False printed"<<endl); //returns Ternary True printed

    cout<<"Address of a: "<<&a<<endl;

    int c=5, d=10;

    cout<<"Post-Increment: "<<c++<<endl; //returns 5
    cout<<"Pre-Increment: "<<++d<<endl; //returns 11

    cout<<"Post-Decrement: "<<c--<<endl; //returns 6
    cout<<"Pre-Decrement: "<<--d<<endl; //returns 10

    return 0; 
}