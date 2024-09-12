//Write a program in C++ to find the last prime number that occurs before the entered number.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=n;i>1;i--)
    {
        bool flag=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0){
                flag=false;
                break;
            }

            else
            {
                flag=true;
            }
        }

        if(flag)
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}