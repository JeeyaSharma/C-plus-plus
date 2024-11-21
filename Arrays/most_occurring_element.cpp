// Find the most occurring element in an array of integers
#include<iostream>
using namespace std;
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

    int max_count=0,mostOccurring=arr[0];
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]) count++;
        }

        if(count>max_count){
            max_count=count;
            mostOccurring=arr[i];
        }
    }

    cout<<"Most occurring element: "<<mostOccurring<<endl<<"Frequency of most occurring element: "<<max_count<<endl;
    return 0;
}