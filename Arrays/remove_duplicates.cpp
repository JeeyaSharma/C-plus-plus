// Remove duplicates from an array, keeping only the first occurrence of each element in C++.
#include<iostream>
using namespace std;
void removeDuplicates(int arr[],int n){
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        bool isDuplicate=false;
        for(int k=0;k<j;k++){
            if(arr[i]==temp[k]){
                isDuplicate=true;
                break;
            }
        }

        if(!isDuplicate){
            temp[j]=arr[i];
            j++;
        }
    }
    cout<<"Array without Duplicate Elements: ";
        for(int i=0;i<j;i++){
            if(i==j-1) cout<<temp[i]<<endl;
            else cout<<temp[i]<<" ";
        }
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Original Array: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    removeDuplicates(arr,size);

    return 0;
}