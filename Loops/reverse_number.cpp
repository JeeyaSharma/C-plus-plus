//Find the reverse of a number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //First, find the number of digits
    int digits=0;
    int find_digits=n;
    while(find_digits!=0)
    {
        find_digits/=10;
        digits++;
    }

    //Now let's find the reverse of the number
    int rev=0,r;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    cout<<"Reverse number: "<<rev<<endl;

    return 0;
}