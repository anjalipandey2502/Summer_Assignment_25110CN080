//selection sort
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number of elements: ";
    cin>>x;
    int arr[x];
    cout<<"Enter array elements: ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x-1;i++){
        int min=i;
        for(int j=i+1;j<x;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}