// Find the frequency of each element in an array.
#include<iostream>
using namespace std;
void frequency(int arr[],int n){
    bool visited[n]={false};
    for(int i=0;i<n;i++){
        if(visited[i]) continue;
        int freq=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                freq++;
                visited[j]=true;
            }
        }

        cout<<arr[i]<<" : "<<freq<<endl;
    }
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

    cout<<"Frequency of array elements: "<<endl;
    frequency(arr,size);

    return 0;
}