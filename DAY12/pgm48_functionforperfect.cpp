//function for perfect number
#include <iostream>
using namespace std;
void perfectnum(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"It is a perfect number..";
    }else{
        cout<<"It is not a perfect number..";
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    perfectnum(n);
    return 0;
}