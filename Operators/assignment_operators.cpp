#include<iostream>
using namespace std;

int main()
{
    int a;
    a=10; //Value assigned using this operator

    cout<<"a+=5: "<<(a+=5)<<endl; //returns 15
    cout<<"a-=5: "<<(a-=5)<<endl; //returns 10
    cout<<"a*=5: "<<(a*=5)<<endl; //returns 50
    cout<<"a/=5: "<<(a/=5)<<endl; //returns 10
    cout<<"a%=5: "<<(a%=5)<<endl; //returns 0

    return 0;
}