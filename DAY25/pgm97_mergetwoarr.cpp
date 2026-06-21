//merge two sorted arrays
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter size of first array: "<<endl;
    cin>>n1;
    int arr1[n1];
    cout<<"Enter elements of first array: "<<endl;//input the first array
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter size of second array: "<<endl;
    cin>>n2;
    int arr2[n2];
    cout<<"Enter elements of second array: "<<endl;//input the second array
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int merged[n1+n2];//create new merge array
    for(int i=0;i<n1;i++){//push arr1 elements in merge array
        merged[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){//push arr2 elements in merge array
        merged[n1+i]=arr2[i];
    }
    cout<<"Merged array: ";//print merge array
    for(int i=0;i<n1+n2;i++){
        cout<<merged[i]<<"  ";
    }
    return 0;
}