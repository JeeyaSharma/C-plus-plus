// Write a C++ program to find the largest element of a given array of integers.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The entered array is: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max=arr[i];
    }

    cout<<"The largest element in array: "<<max<<endl;
}