// Check if an array is a palindrome in C++.
#include<iostream>
using namespace std;
bool isPalindrome(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]!=arr[end]) return false;
        start++;
        end--;
    }
    return true;
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
    cout<<"Entered Array: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    if(isPalindrome(arr,size)) cout<<"The Array is a Palindrome."<<endl;
    else cout<<"The Array is not a Palindrome."<<endl;

    return 0;
}