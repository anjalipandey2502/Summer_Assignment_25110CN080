//wap to print factors of a number..
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Factors of number are: ";
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<"\t";
            if(i!=n/i){
            cout<<n/i<<"\t";
        }
        }    
    }
    return 0;
}