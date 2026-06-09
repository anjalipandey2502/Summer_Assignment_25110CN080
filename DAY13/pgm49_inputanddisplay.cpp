//wap to input and display array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Entered array elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}