//Find the largest element in the array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/4;
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max) max=arr[i];
    }

    cout<<"Maximum element= "<<max<<endl;

    return 0;
}