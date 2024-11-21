// Write a C++ program to find the second smallest elements in a given array of integers.
#include<iostream>
#include<climits>
using namespace std;
void secondSmallest(int arr[], int n){
    int first, second;
    first=INT_MAX;
    second=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second){
            second=arr[i];
        }
    }

    cout<<"Second Smallest element: "<<second<<endl;
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Entered array elements: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    secondSmallest(arr,size);

    return 0;
}