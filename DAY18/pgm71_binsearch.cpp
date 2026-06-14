//binary search
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element to search: ";
    cin>>key;
    int i=0,j=n-1;
    bool found=false;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==key){
            cout<<"Element found at index "<<mid<<endl;
            found=true;
            break;
        }else if(arr[mid]<key){
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    if(found==false){
        cout<<"Element does not exist in given array...";
    }
    return 0;
}