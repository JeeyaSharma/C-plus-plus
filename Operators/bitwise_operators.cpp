#include<iostream>
using namespace std;

int main()
{
    int num1=5; //Binary form= 0101

    cout<<"Left shift: "<<(num1<<1)<<endl; //returns 10
    cout<<"Right shift: "<<(num1>>1)<<endl; //returns 2

    int num2=8; //Binary form= 1000
    cout<<"Bitwise OR: "<<(num1 | num2)<<endl; //returns 13
    cout<<"Bitwise AND: "<<(num1 & num2)<<endl; //returns 0
    
     return 0;
}