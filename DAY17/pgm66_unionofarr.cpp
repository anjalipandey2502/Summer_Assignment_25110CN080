//union of arrays
#include <iostream>
#include <set>
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
    set <int> st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }cout<<"Union of two array is: ";
    for(int x : st){
        cout<<x<<" ";
    }
    return 0;
}