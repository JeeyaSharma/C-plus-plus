/*
Write a C++ program that displays the sum of the n terms of even natural numbers.
Sample Output:
Input number of terms: 5
The even numbers are: 2 4 6 8 10
The Sum of even Natural Numbers upto 5 terms: 30
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input number of terms: ";
    cin>>n;

    int sum=0;
    cout<<"The even numbers are: ";
    for(int i=1;i<=n;i++)
    {
        cout<<2*i<<" ";
        sum+=2*i;
    }
    cout<<endl<<"The sum of even Natural Numbers upto "<<n<<" terms: "<<sum<<endl;

    return 0;
}