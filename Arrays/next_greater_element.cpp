// Find the next greater element of every element of a given array of integers
#include<iostream>
using namespace std;
void nextGreaterElement(int arr[],int n){
    cout<<"The next greater elements are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                cout<<arr[i]<<" : "<<arr[j]<<endl;
                break;
            }
            else continue;
        }
    }
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

    cout<<"Entered elements: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    nextGreaterElement(arr,size);

    return 0;
}