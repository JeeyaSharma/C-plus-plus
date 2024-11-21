// Check if 1-D array is sorted in ascending order in C++ and sort in ascending order if not sorted
#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]) return false;
    }

    return true;
}
void sortASC(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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
    cout<<"Original Array: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    if(isSorted(arr,size)){
        cout<<"The array is sorted in ascending order."<<endl;
    }
    else{
        cout<<"The array is not sorted in ascending order"<<endl;
        cout<<"Sorted Array: ";
        sortASC(arr,size);
        for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
        }
    }

    return 0;
}