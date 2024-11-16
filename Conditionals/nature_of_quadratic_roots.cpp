/*
Write nested if statements for printing Nature of Roots of Quadratic equation and 

find discriminant

d=b^2-4ac

if d=0 then roots are real and equal

if d>0 roots are real but unequal

if d<0 then riots are imaginary
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter coefficients: ";
    cin>>a>>b>>c;

    int d;
    d=sqrt(b*b-4*a*c);

    if(d==0) cout<<"Roots are real and equal";
    else if(d>0) cout<<"Roots are real but unequal";
    else if(d<0) cout<<"Roots are imaginary";

    return 0;
}