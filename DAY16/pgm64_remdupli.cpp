//wap to remove duplicates from array
#include <iostream>
#include <algorithm>
using namespace std;
void remdupli(int n,int arr[]){
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    cout<<"Array after removing dupicates: ";
    for(int i=0;i<=j;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    remdupli(n,arr);
    return 0;
}