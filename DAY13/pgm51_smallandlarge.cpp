//smallest and largest term of array
#include <iostream>
using namespace std;
int main(){
    int n,lar=0,sml=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest=arr[0],largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
            lar=i;
        }if(arr[i]<smallest){
            smallest=arr[i];
            sml=i;
        }
    }
    cout<<"Largest element is "<<largest<<" at index "<<lar<<endl;
    cout<<"Smallest element is "<<smallest<<" at index "<<sml<<endl;
    return 0;
}