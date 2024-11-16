/*
write a program to find distance between 2 points
first point => x1,y1
second point => x2,y2
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,y1;
    cout<<"Enter first point: ";
    cin>>x1>>y1;

    int x2,y2;
    cout<<"Enter second point: ";
    cin>>x2>>y2;

    float distance;

    distance=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    cout<<"Distance= "<<distance<<endl;

    return 0;
}