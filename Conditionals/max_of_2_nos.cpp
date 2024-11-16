#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(a<b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<"Both are equal"<<endl;
    }

    return 0;
}