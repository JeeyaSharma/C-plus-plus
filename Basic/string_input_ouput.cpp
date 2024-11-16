#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter your name: ";
    string name;
    getline(cin,name);
    cout<<"Welcome Mr/Ms "<<name<<endl;
    
    return 0;
}