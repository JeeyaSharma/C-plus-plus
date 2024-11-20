#include<iostream>
using namespace std;
int main(){
    string s1;
    cout<<"Enter name: ";
    getline(cin,s1);
    cout<<"Welcome "<<s1<<endl;

    string s2;
    cout<<"Enter name again: ";
    getline(cin,s2);
    cout<<"Welcome again, "<<s2<<endl;

    return 0;
}