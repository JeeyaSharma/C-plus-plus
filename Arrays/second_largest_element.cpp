// Write a C++ program to find the second largest element in an array of integers.
#include<iostream>
#include<climits>
using namespace std;
void secondLargestElement(int n,int array[]){
    int first,second;
    first=INT_MIN;
    second=INT_MIN;
    for(int i=0;i<n;i++){
        if(array[i]>first){
            second=first;
            first=array[i];
        }
        else if(array[i]>second){
            second=array[i];
        }
    }

    cout<<"The Second Largest Element: "<<second<<endl;
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

    cout<<"Entered array elements are: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    secondLargestElement(size,arr);

    return 0;
}