// WAP to find the average of elements in a 1D array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int sum=0;
    cout<<"Entered Array Elements: ";
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    float avg;
    avg=sum/size;
    cout<<"Average of array elements: "<<avg<<endl;

    return 0;
}