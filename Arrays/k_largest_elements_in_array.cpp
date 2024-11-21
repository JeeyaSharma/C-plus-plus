// Write a C++ program to find the k largest elements in a given array of integers.
/*
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
void kthLargestElements(int arr[],int n,int k){
    sort(arr,arr+n,greater<int>());
    cout<<"K-Largest Elements of Array: ";
    for(int i=0;i<k;i++){
        if(i==k-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter value of k: ";
    cin>>k;

    kthLargestElements(arr,size,k);

    return 0;
}
*/

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

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"Sorted array: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    cout<<k<<" Largest Elements of Array: ";
    for(int i=0;i<k;i++){
        if(i==k-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    return 0;
}