// Check if an array contains a specific element in C++.
#include<iostream>
using namespace std;
bool isPresent(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target) return true;
    }

    return false;
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Entered array elements: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    int target;
    cout<<"Enter the element to be checked in array: ";
    cin>>target;

    if(isPresent(arr,size,target)){
        cout<<target<<" is present in the array"<<endl;
    }
    else{
        cout<<target<<" is not present in the array"<<endl;
    }

    return 0;
}