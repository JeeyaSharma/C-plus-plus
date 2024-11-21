/*
Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
Example:
Sample Input: w3resource
Sample Output: x3sftpvsdf
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    int len=str.length();
    for(int i=0;i<len;i++){
        if(isalpha(str[i])){
            if(str[i]=='z') str[i]='a';
            else if(str[i]=='Z') str[i]='Z';
            else str[i]+=1;
        }
    }

    cout<<str<<endl;
}