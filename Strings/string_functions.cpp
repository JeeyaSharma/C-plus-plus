#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    //Length of string
    cout<<"Length of string: "<<s.length()<<endl;

    //Concatenation of strings
    char s1[20]="Good";
    char s2[10]="Morning";
    cout<<"Concatenated string: "<<strcat(s1,s2)<<endl;

    //Copying strings
    char s3[20]="Hello World";
    char s4[20]="";
    strcpy(s4,s3);
    cout<<"Copied String: "<<s4<<endl;
}