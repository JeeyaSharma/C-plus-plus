// Write a C++ program to find the largest three elements in an array.
#include<iostream>
#include<climits>
using namespace std;

void threeLargestelements(int arr_size,int array[]){
    int first,second,third;
    first=INT_MIN;
    second=INT_MIN;
    third=INT_MIN;
    for(int i=0;i<arr_size;i++){
        if(array[i]>first){
            third=second;
            second=first;
            first=array[i];
        }
        else if(array[i]>second){
            third=second;
            second=array[i];
        }
        else if(array[i]>third){
            third=array[i];
        }
    }

    cout<<"The Largest three elements in the array are:"<<endl<<first<<" "<<second<<" "<<third<<endl;
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

    cout<<"The Entered array is: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    threeLargestelements(size,arr);

    return 0;
}