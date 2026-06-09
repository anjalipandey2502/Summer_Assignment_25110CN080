//sum and average of arrays
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){//it'll reduce time complexity as input and sum is in same loop
        cin>>arr[i];
        sum+=arr[i];
    }
    int avg=sum/n;
    cout<<"Sum of arrray terms is "<<sum<<endl;
    cout<<"Average of array terms is "<<avg<<endl;
    return 0;
}