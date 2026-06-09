//number of even and odd elements
#include <iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){//count even and odd element in same loop
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"In our array "<<even<<" are even elements and "<<odd<<" are odd elements "<<endl;
    return 0;
}