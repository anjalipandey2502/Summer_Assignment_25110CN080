//wap for linear search
#include <iostream>
using namespace std;
int linearsearch(int n,int arr[],int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
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
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    int ans=linearsearch(n,arr,key);
    if(ans==-1){
        cout<<"No match found"<<endl;//works if no match is found
    }else{
        cout<<"Index at which "<<key<<" is "<<ans<<endl;
    }
    return 0;
}