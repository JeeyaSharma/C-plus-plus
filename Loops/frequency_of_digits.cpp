/*
Write a program in C++ to find the frequency of each digit in a given integer.
Sample Output:
Input any number: 122345
The frequency of 0 = 0
The frequency of 1 = 1
The frequency of 2 = 2
The frequency of 3 = 1
The frequency of 4 = 1
The frequency of 5 = 1
The frequency of 6 = 0
The frequency of 7 = 0
The frequency of 8 = 0
The frequency of 9 = 0
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Input any number: ";
    cin>>num;

    int freq,r;

    for(int i=1;i<10;i++)
    {
        cout<<"The frequency of "<<i<<" is: ";
        freq=0;
        for(int j=num;j>0;j/=10)
        {
            r=j%10;

            if(r==i)
            {
                freq++;
            }
        }
        cout<<freq<<endl;
    }

    return 0;
}