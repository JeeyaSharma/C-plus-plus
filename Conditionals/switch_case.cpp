/*Write a program to print the day based upon the day number:
1 --- Monday
2 --- Tuesday
3 --- Wednesday
4 --- Thursday
5 --- Friday
6 --- Saturday
7 --- Sunday*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the day number: ";
    cin>>num;

    switch(num)
    {
        case 1:
        {
            cout<<"Monday"<<endl;
            break;
        }
        case 2:
        {
            cout<<"Tuesday"<<endl;
            break;
        }
        case 3:
        {
            cout<<"Wednesday"<<endl;
            break;
        }
        case 4:
        {
            cout<<"Thursday"<<endl;
            break;
        }
        case 5:
        {
            cout<<"Friday"<<endl;
            break;
        }
        case 6:
        {
            cout<<"Saturday"<<endl;
            break;
        }
        case 7:
        {
            cout<<"Sunday"<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid Input"<<endl;
        }
    }

    return 0;
}