//program to merge arrays
#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter sizes of arrays: ";
    cin>>n1>>n2;
    int arr1[n1],arr2[n2];
    cout<<"Enter elements in first array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements in second array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int merg[n1+n2];
    for(int i=0;i<n1;i++){
        merg[i]=arr1[i];
    }
    for(int j=0;j<n2;j++){
        merg[j+n1]=arr2[j];
    }cout<<"Merged array is: ";
    for(int i=0;i<(n1+n2);i++){
        cout<<merg[i]<<"  ";
    }
    return 0;
}