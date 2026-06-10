//second largest
#include <iostream>
#include <climits>//to use negative infinity
using namespace std;
int secondlargest(int n,int arr[]){
    int largest= INT_MIN;
    int secondlargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){//secondlrgest will get value of largest
            secondlargest=largest;
            largest=arr[i];
        }else if(arr[i]>secondlargest  && arr[i]!=largest){
            secondlargest=arr[i];//change only when arr[i] is not equal to largest
        }
    }
    return secondlargest;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    if(n<2){
        cout<<"Invalid input..";
        return 0;
    }
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second largest element is: "<<secondlargest(n,arr);
    return 0;
}