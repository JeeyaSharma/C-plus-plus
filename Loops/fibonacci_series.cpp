/*
Write a program in C++ to display the first n terms of the Fibonacci series.
Sample Output:
Input number of terms to display: 10
Here is the Fibonacci series upto to 10 terms:
0 1 1 2 3 5 8 13 21 34
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the number of terms to display: ";
    cin>>n;
    int a=0,b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=2;i<n;i++)
    {
        int c;
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    
    return 0;
}