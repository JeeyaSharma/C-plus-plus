//Write a program to find the largest 3 elements in an array
#include<iostream>
using namespace std;
void threeLargest(int arr[],int arr_size){
    int first,second,third;
    first=second=third=INT16_MIN;
    for(int i=0;i<arr_size;i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third){
            third=arr[i];
        }
    }

    cout<<"Three Largest Elements in array: "<<first<<" "<<second<<" "<<third<<endl;
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The entered array: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    threeLargest(arr,size);

    return 0;
}