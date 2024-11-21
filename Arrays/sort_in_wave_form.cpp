// Write a C++ program to sort a given unsorted array of integers, in wave form.
// Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . 
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sortElements(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }  
}
void waveForm(int arr[],int n){
    sortElements(arr,n);

    for(int i=0;i<n-1;i+=2){
        swap(&arr[i],&arr[i+1]);
    }
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

    cout<<"Entered array: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    waveForm(arr,size);
    cout<<"Elements in the wave form are: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    return 0;
}