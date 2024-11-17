#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array is: "<<endl;
    for(int i=0;i<n;i++){
        if(i==n-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    cout<<"Enter key: ";
    int key;
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Key found at index: "<<i<<endl;
            return 0;
        }
    }

    cout<<"Key not found at any index"<<endl;
    return 0;
}