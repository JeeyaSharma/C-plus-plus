/*
Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].
Sample Output:
Input the value of x: 2
Input number of terms: 5
The values of series:
2
-8
32
-128
512
The sum of the series upto 5 term is: 410
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
    int x,n;
    cout<<"Input the value of x: ";
    cin>>x;
    cout<<"Input the value of  n: ";
    cin>>n;

    int term=-1;
    int sum=x;
    cout<<sum<<endl;
    int exp;
    for(int i=1;i<n;i++)
    {
        exp= 2*i +1;
        int value=term*power(x,exp);
        cout<<value<<endl;
        sum+=value;
        term*=(-1);
    }
    cout<<"Sum of series: "<<sum<<endl;

    return 0;
}