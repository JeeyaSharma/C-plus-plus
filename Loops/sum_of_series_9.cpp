/*
Write a C++ program to find the sum of an A.P. series.
Sample Output:
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 8
Input the common difference of A.P. series: 5
The Sum of the A.P. series are :
1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148
*/

#include<iostream>
using namespace std;

int main()
{
    int a0;
    cout<<"Input the starting number of the series: ";
    cin>>a0;

    int n;
    cout<<"Input the number of items for the A.P. series: ";
    cin>>n;

    int cd;
    cout<<"Input the common difference of the A.P. series: ";
    cin>>cd;
    
    int an=a0+(n-1)*cd;
    int sum=(n/2)*(a0+an);
    
    cout<<"Sum of the A.P. series: "<<sum<<endl;

    return 0;
}