//pair with give sum
#include <iostream>
#include <vector>
using namespace std;
vector<int>pairsum(int n,int target,int arr[]){
    vector<int>ans;
    int i=0,j=n-1;
    while(i<j){
        int pairsum=arr[i]+arr[j];
        if(pairsum<target){
            i++;
        }else if(pairsum>target){
            j--;
        }else if(pairsum==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }int target;
    cout<<"Enter target: ";
    cin>>target;
    vector<int>vec=pairsum(n,target,arr);
    cout<<"Indices for target sum are: "<<vec[0]<<"    "<<vec[1]<<endl;
    return 0;
}