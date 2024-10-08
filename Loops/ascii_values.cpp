/*
Write a C++ program that prints all ASCII characters with their values.
Sample Output:
Input the starting value for ASCII characters: 65
Input the ending value for ASCII characters: 75
The ASCII characters:
65 --> A
66 --> B
67 --> C
68 --> D
69 --> E
70 --> F
71 --> G
72 --> H
73 --> I
74 --> J
75 --> K
*/

#include<iostream>
using namespace std;

int main()
{
    int start;
    cout<<"Input the starting value for the ASCII characters: ";
    cin>>start;

    int end;
    cout<<"Input the ending value for the ASCII characters: ";
    cin>>end;

    for(int i=start;i<=end;i++)
    {
        cout<<i<<" --> "<<char(i)<<endl;
    }

    return 0;
}