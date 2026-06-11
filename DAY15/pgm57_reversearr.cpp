//pgm57...wap to reverse array
#include <iostream>
using namespace std;
void reversearr(int n,int arr[] ){//non primitive data type-->pass by reference always
    int st=0,end=n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
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
    reversearr(n, arr);
    cout<<"Reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}