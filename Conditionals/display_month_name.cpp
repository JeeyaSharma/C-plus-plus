/*
Display Name of a Month for a given Month number

1 -- jan
2 -- feb
3 -- mar
4 -- apr
5 -- may
6 -- jun
7 -- jul
8 -- aug
9 -- sep
10 -- oct
11 -- nov
12 -- dec
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number between 1-12: ";
    cin>>n;

    switch(n){
        case 1:{
            cout<<"jan"<<endl;
            break;
        }
        case 2:{
            cout<<"feb"<<endl;
            break;
        }
        case 3:{
            cout<<"mar"<<endl;
            break;
        }
        case 4:{
            cout<<"apr"<<endl;
            break;
        }
        case 5:{
            cout<<"may"<<endl;
            break;
        }
        case 6:{
            cout<<"jun"<<endl;
            break;
        }
        case 7:{
            cout<<"jul"<<endl;
            break;
        }
        case 8:{
            cout<<"aug"<<endl;
            break;
        }
        case 9:{
            cout<<"sept"<<endl;
            break;
        }
        case 10:{
            cout<<"oct"<<endl;
            break;
        }
        case 11:{
            cout<<"nov"<<endl;
            break;
        }
        case 12:{
            cout<<"dec"<<endl;
            break;
        }
        default:{
            cout<<"Invalid Input<<endl";
        }
    }
    return 0;
}
