//intersection of two arrays
#include <iostream>
using namespace std;
void intersect(int arr1[],int arr2[],int x1,int x2){
    cout<<"Intersection is: ";
    for(int i=0;i<x1;i++){
        int count=0;
        for(int j=0;j<x2;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count>=1){
            cout<<arr1[i]<<"\t";
        }
    }
}
int main(){
    int x1,x2;
    cout<<"Enter size of arrays: ";
    cin>>x1>>x2;
    int arr1[x1],arr2[x2];
    cout<<"Enter first array: ";
    for(int i=0;i<x1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter second array: ";
    for(int i=0;i<x2;i++){
        cin>>arr2[i];
    }
    intersect(arr1,arr2,x1,x2);
    return 0;
}