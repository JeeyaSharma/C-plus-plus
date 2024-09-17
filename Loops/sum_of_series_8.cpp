/*
Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Sample Output:
Input number of terms: 5
1 + 11 + 111 + 1111 + 11111
The sum of the series is: 12345
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number of terms: ";
    cin>>n;

    int sum=0,term=0;
    for(int i=0;i<n;i++)
    {
        term=10*term+1;
        sum+=term;
    }

    cout<<"Sum of series: "<<sum<<endl;

    return 0;
}