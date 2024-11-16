/*
Write nested conditions to check average marks and display grades

*this coding exercise is based on previous video*

Calculate Average (Avg)

if Avg >=60 print Grade 'A'

if 35<=Avg<60 print Grade 'B'

if Avg<35 print Grade 'C'

m1,m2,m3 are marks parameters
*/
#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3;
    cout<<"Enter marks: ";
    cin>>m1>>m2>>m3;
    float Total,Avg;
    Total=m1+m2+m3;
    Avg=Total/3;

    if(Avg>=60) cout<<"A";
    else if(Avg>=35 && Avg<60) cout<<"B";
    else if(Avg<35) cout<<"C";

    return 0;
}