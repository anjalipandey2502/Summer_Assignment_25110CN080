//wap to check perfect number...if a number is equals to the sum of its positive divisors excepts the number itself
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter number: ";
    cin>>n;
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
    return 0;
}