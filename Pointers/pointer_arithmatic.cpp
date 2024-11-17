#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};

    int *p=arr;

    cout<<*p<<endl;
    cout<<p<<endl<<endl<<endl;
    p++;
    cout<<*p<<endl;
    cout<<p<<endl<<endl<<endl;
    p+=3;
    cout<<*p<<endl;
    cout<<p<<endl<<endl<<endl;
    p--;
    cout<<*p<<endl;
    cout<<p<<endl<<endl<<endl;
}