#include<iostream>
// #define PI 3.14;
using namespace std;
int main(){
    int radius,height;

    cin>>radius>>height;

    float volume;
    volume= 3.14*radius*radius*height;

    cout<<"Volume: "<<volume<<endl;

    return 0;
}