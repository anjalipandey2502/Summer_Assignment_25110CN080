//bubble sort
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter elements: ";
    cin>>x;
    int arr[x];
    cout<<"Enter array elements: ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x-1;i++){
        for(int j=0;j<x-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}