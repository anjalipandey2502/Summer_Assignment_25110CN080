//pgm to find missing element
#include <iostream>
using namespace std;
int missingele(int n,int arr[]){
    int total=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ele=total-sum;
    return ele;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements(must start from 0) : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }int ele=missingele(n,arr);
    cout<<"Missing element is: "<<ele<<endl;
    return 0;
}