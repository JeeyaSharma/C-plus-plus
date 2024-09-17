/*
Write a program in C++ to display the n terms of a harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms.
Sample Output:
Input number of terms: 5
1/1 + 1/2 + 1/3 + 1/4 + 1/5
The sum of the series upto 5 terms: 2.28333
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input number of terms: ";
    cin>>n;

    float term, sum=0;
    for(int i=1;i<=n;i++)
    {
        term=1.0/i;
        sum+=term;
    }

    cout<<"Sum of harmonic series: "<<sum<<endl;

    return 0;
}