// Find the median of an array
#include<iostream>
using namespace std;
double findMedian(int arr[],int n){
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
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        if(i==n-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }


    if(n%2==0){
        return (arr[n/2 -1]+arr[n/2])/2.0;
    }
    else{
        return arr[n/2];
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


    cout<<"Median of Array: "<<findMedian(arr,size)<<endl;

    return 0;
}