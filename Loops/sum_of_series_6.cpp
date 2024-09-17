/*
Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
Sample Output:
Input the value of x: 3
Input number of terms: 5
The sum is : 16.375
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

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }

    return fact;
}

int main()
{
    int x,n;
    cout<<"Input the value of x: ";
    cin>>x;

    cout<<"Input the number of terms: ";
    cin>>n;

    float sum=1;
    for(int i=1;i<n;i++)
    {
        float term;
        term=float(power(x,i))/factorial(i);
        sum+=term;
    }
    cout<<"The sum is: "<<sum<<endl;
    
    return 0;
}