/*
Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
Sample Output:
Input number of terms: 5
9 99 999 9999 99999
The sum of the sarise = 111105
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number of terms: ";
    cin>>n;

    int term=9,sum=0;
    cout<<term<<" ";
    for(int i=2;i<=n;i++)
    {
        term = term * 10 + 9;
        cout<<term<<" ";
        sum+=term;
    }
    cout<<endl<<"The sum of the series: "<<sum<<endl;

    return 0;
}