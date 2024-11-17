//Display all elements of the Array

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/4;
    cout<<"Size of array: "<<size<<endl;
    cout<<"Array Elements are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}