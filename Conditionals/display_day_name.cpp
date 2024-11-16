/*
Display name of the Day fro given Day Number
day number -- day name(3 letters)

1 -- sun
2 -- mon
3 -- tue
4 -- wed
5 -- thu
6 -- fri
7 -- sat
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number between 1-7: ";
    cin>>n;

    switch(n){
        case 1:{
            cout<<"sun"<<endl;
            break;
        }
        case 2:{
            cout<<"mon"<<endl;
            break;
        }
        case 3:{
            cout<<"tue"<<endl;
            break;
        }
        case 4:{
            cout<<"wed"<<endl;
            break;
        }
        case 5:{
            cout<<"thu"<<endl;
            break;
        }
        case 6:{
            cout<<"fri"<<endl;
            break;
        }
        case 7:{
            cout<<"sat"<<endl;
            break;
        }
        default:{
            cout<<"Invalid Input"<<endl;
        }
    }

    return 0;
}