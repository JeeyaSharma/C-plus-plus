//WAP to find the smallest element in the array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Entered Array: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min) min=arr[i];
    }

    cout<<"Minimum Element: "<<min<<endl;

}