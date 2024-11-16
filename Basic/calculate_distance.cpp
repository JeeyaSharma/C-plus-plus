/*
Write an expression for calculating Distance

parameters are

u -- initial velocity

v -- final velocity

a -- acceleration

distance:  v^2-u^2=2as
*/

#include<iostream>
using namespace std;
int main(){
    int u,v,a;
    cin>>u>>v>>a;

    float distance;
    distance= (v*v - u*u)/(2*a);

    cout<<"Distance= "<<distance<<endl;

    return 0;
}