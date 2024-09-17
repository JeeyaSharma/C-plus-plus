/*
Write a program in C++ to find the sum of series 1 - X^2/2! + X^4/4!-.... upto nth term.
Sample Output:
Input the value of X: 3
Input the value for nth term: 4
term 1 value is: 1
term 2 value is: -4.5
term 3 value is: 3.375
term 4 value is: -1.0125
The sum of the above series is: -1.1375
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

int fact(int n)
{
    int fact=1;
    if(n==0) return 1;
    
    else{
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        
        return fact;
    }
}

int main()
{
    int x;
    cout<<"Input value of X: ";
    cin>>x;

    int n;
    cout<<"Input value for nth term: ";
    cin>>n;

    float sum=1,term=1;
    int y=2;
    cout<<"Term 1 value is: "<<sum<<endl;

    for(int i=2;i<=n;i++)
    {
        float value;
        term*=(-1);
        
        value=float(power(x,y))/float(fact(y));
        
        y+=2;

        float final_term=value*term;

        cout<<"Term "<<i<<" value is: "<<final_term<<endl;

        sum+=final_term;
    }

    cout<<"Sum of series: "<<sum<<endl;

    return 0;
    
}