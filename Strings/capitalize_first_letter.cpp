/*
Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.
Example:
Sample Input: cpp string exercises
Sample Output: Cpp String Exercises
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);

    int len=str.length();
    for(int i=0;i<len;i++){
        if(i==0 || str[i-1]==' '){
            str[i]=toupper(str[i]);
        }
    }

    cout<<"Output: "<<str<<endl;

    return 0;
}