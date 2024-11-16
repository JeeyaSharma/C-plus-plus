/*
Calculate Discounted Bill Amount


if amount>=5000 offer 20% discount

if 2000<=amount<5000 offer 10% discount

if amount<2000 offer 5% discount


output
print discounted amount ie. bill amount after discount
*/
#include<iostream>
using namespace std;
int main(){
    int amt;
    cout<<"Enter the amount: ";
    cin>>amt;

    float discount;
    if(amt>=5000) discount=amt*(20.0/100);
    else if(amt>=2000 && amt<5000) discount=amt*(10.0/100);
    else if(amt<2000) discount=amt*(5.0/100);

    float discounted_price;
    discounted_price=amt-discount;

    cout<<"Discounted amount: "<<discounted_price<<endl;

    return 0;
}