//find duplicates in a program
#include <iostream>
#include <algorithm>//as we want to use sort function
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
    bool found=false;
    sort(arr,arr+n);
    cout<<"Duplicate elements are: ";
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
            found=true;
            while(i<n-1 && arr[i]==arr[i+1]){//check ...not to get segmentation error 
                i++;
            }
        }
    }
    if(found==false){
        cout<<"Not found..";
    }
    return 0;
}