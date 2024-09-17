/*
Write a program in C++ to input any number and print it in words.
Sample Output:
Input any number: 8309
Eight Three Zero Nine
*/

#include<iostream>
using namespace std;

int reverse(int n)
{
    int r,rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }

    return rev;
}

int main()
{
    int n;
    cout<<"Input any number: ";
    cin>>n;

    int rev=reverse(n);

    int r;
    while(rev!=0)
    {
        r=rev%10;
        
        switch(r)
        {
            case 0:
            {
                cout<<"Zero"<<" ";
                break;
            }
            case 1:
            {
                cout<<"One"<<" ";
                break;
            }
            case 2:
            {
                cout<<"Two"<<" ";
                break;
            }
            case 3:
            {
                cout<<"Three"<<" ";
                break;
            }
            case 4:
            {
                cout<<"Four"<<" ";
                break;
            }
            case 5:
            {
                cout<<"Five"<<" ";
                break;
            }
            case 6:
            {
                cout<<"Six"<<" ";
                break;
            }
            case 7:
            {
                cout<<"Seven"<<" ";
                break;
            }
            case 8:
            {
                cout<<"Eight"<<" ";
                break;
            }
            case 9:
            {
                cout<<"Nine"<<" ";
                break;
            }
            default:
            {
                cout<<"Invalid input";
            }
        }

        rev/=10;
    }

    cout<<endl;

    return 0;

}