/*
Write an Expression for calculating Simple Interest

parameters are

P -- principle amount

T -- time

R -- rate of interest
*/
#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cin>>p>>r>>t;

    float SI;
    SI=(p*r*t)/100.0;

    cout<<"Simple Interest= "<<SI<<endl;

    return 0;
}