//frequency of an element
#include <iostream>
using namespace std;
int frequency(int n,int arr[],int ele){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            count++;
        }
    }
    return count;
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
    int key;
    cout<<"Enter element to find frequency: ";
    cin>>key;
    int ans=frequency(n,arr,key);
    cout<<key<<" exist "<<ans<<" times in the input array..."<<endl;
    return 0;
}