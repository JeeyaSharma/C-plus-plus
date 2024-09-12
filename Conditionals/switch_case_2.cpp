//Write a program using switch case to find if the entered character is a vowel or consonant.

#include<iostream>
using namespace std;

int main()
{
    char value;
    cout<<"Enter a character: ";
    cin>>value;

    switch(value)
    {
        case 'a':
        {
            cout<<"Vowel"<<endl;
            break;
        }
        case 'e':
        {
            cout<<"Vowel"<<endl;
            break;
        }
        case 'i':
        {
            cout<<"Vowel"<<endl;
            break;
        }
        case 'o':
        {
            cout<<"Vowel"<<endl;
            break;
        }
        case 'u':
        {
            cout<<"Vowel"<<endl;
            break;
        }
        default:
        {
            if(value>=33 && value<=47)
            {
                cout<<"Special Character"<<endl;
                break;
            }
            else if(value>=48 && value<=57)
            {
                cout<<"Number"<<endl;
                break;
            }
            else
            {
                cout<<"Consonant"<<endl;
                break;
            }
        }
    }

    return 0;
}