/*
Write condition to check is given time is Working hours or not

condition

if hour is from 9 to 18 its working hours

otherwise leisure

output

cout<<"working"

cout<<"leisure"
*/
#include<iostream>
using namespace std;
int main(){
    int hrs;
    cin>>hrs;

    if(hrs>=9 && hrs<=18) cout<<"working";
    else cout<<"leisure";

    return 0;
}