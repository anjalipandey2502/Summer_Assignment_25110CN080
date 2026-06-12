//maximum frequency element
#include <iostream>
#include <vector>
using namespace std;
vector<int> freq(int n,int arr[]){
    int maxelement=arr[0];
    int maxcount=0;
    for(int i=0;i<n;i++){
        int currentcnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                currentcnt++;
            }
        }
        if(currentcnt>maxcount){
            maxcount=currentcnt;
            maxelement=arr[i];
        }
    }
    return {maxelement,maxcount};
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>vec=freq(n,arr);
    cout<<"Maximum element is "<<vec[0]<<" and number of times it exist is "<<vec[1]<<endl;
    return 0;
}