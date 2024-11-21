// Find all elements in array of integers which have at-least two greater elements
#include<iostream>
using namespace std;
void atleast2GreaterElements(int arr[],int n){
    cout<<"Elements having atleast 2 greater elements: ";
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]) count++;
        }

        if(i==n-1){
            if(count>=2) cout<<arr[i]<<endl;
        }
        else{
            if(count>=2) cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Entered Array Elements: ";
    for(int i=0;i<size;i++){
        if(i==size-1) cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

    atleast2GreaterElements(arr,size);

    return 0;
}