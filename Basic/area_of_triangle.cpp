#include<iostream>
using namespace std;
int main(){
    int base,height;
    cout<<"Enter base of triangle: ";
    cin>>base;
    cout<<"Enter height of triangle: ";
    cin>>height;

    float area=(base*height)/2;

    cout<<"Area of triangle: "<<area<<endl;
    
    return 0;
}