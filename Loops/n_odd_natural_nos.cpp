/*
Write a C++ program that displays the sum of n odd natural numbers.
Sample Output:
Input number of terms: 5
The odd numbers are: 1 3 5 7 9
The Sum of odd Natural Numbers upto 5 terms: 25
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input number of terms: ";
    cin>>n;

    int sum=0;
    cout<<"The odd numbers are: ";
    for(int i=1;i<=(2*n-1);i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            cout<<i<<" ";
            sum+=i;
        }
    }

    cout<<endl<<"The Sum of odd Natural Numbers upto "<<n<<" terms: "<<sum<<endl;
    
    return 0;
}