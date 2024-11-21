// Remove all occurrences of a specific element from 1-D array in C++.
#include<iostream>
using namespace std;
void removeElement(int arr[],int n,int target){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target) count++;
    }
    int size=n-count;
    int new_arr[size];
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=target){
            new_arr[index]=arr[i];
            index++;
        }
    }

    cout<<"New Array wihtout "<<target<<" is: ";
    int new_size=sizeof(new_arr)/sizeof(new_arr[0]);
    for(int i=0;i<new_size;i++){
        if(i==new_size-1) cout<<new_arr[i]<<endl;
        else cout<<new_arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    int n;
    cout<<"Enter the element to be removed: ";
    cin>>n;
    removeElement(arr,size,n);

    return 0;
}