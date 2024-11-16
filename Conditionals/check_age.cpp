/*
Write conditional statements to check age and display a message

parameter for  CheckAge(int age)

age  -- age of the person

young - if age is greater than or equal to 12 and less than or equal to 50

otherwise not young

output

cout<<"young"

cout<"not young"
*/
#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;

    if(age>=12 && age<=50) cout<<"young";
    else cout<<"not young";

    return 0;
}