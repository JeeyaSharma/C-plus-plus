/*
Write a C++ program to find the sum of the GP series.
Sample Output:
Input the starting number of the G.P. series: 3
Input the number of items for the G.P. series: 5
Input the common ratio of G.P. series: 2
The numbers for the G.P. series:
3 6 12 24 48
The Sum of the G.P. series: 93
*/

#include<iostream>
using namespace std;

int power(int n,int exp)
{
    int product=1;
    for(int i=1;i<=exp;i++)
    {
        product*=n;
    }

    return product;
}

int main()
{
    int a0;
    cout<<"Input the starting number of the G.P. series: ";
    cin>>a0;

    int n;
    cout<<"Input the number of items for the G.P. series: ";
    cin>>n;

    int r;
    cout<<"Input the common ratio of G.P. series: ";
    cin>>r;

    int term;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        term=a0*power(r,i);
        cout<<term<<" ";
        sum+=term;
    }

    cout<<endl<<"The sum of the G.P series: "<<sum<<endl;

        return 0;

}