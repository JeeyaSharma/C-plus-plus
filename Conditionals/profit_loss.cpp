//Write a program to input Selling Price (SP) and Cost Price (CP) from user and calculate profit or loss

#include<iostream>
using namespace std;

int main()
{
    int SP,CP;
    cout<<"Enter Cost Price: ";
    cin>>CP;
    cout<<"Enter Selling Price:";
    cin>>SP;

    if(SP>CP)
    {
        cout<<"Profit: "<<SP-CP<<endl;
    }
    else if(CP>SP)
    {
        cout<<"Loss: "<<CP-SP<<endl;
    }
    else
    {
        cout<<"Neither Profit Nor Loss"<<endl;
    }

    return 0;
}