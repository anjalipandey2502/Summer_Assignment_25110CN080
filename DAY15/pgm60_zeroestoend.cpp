//wap to move zeroes to end
#include <iostream>
#include <vector>
using namespace std;
void movezero(int n,int arr[]){
    vector<int>vec(n,0);
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            vec[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=vec[i];
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
    }movezero(n,arr);
    cout<<"Changed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}