//program 9--wap to check whether a number is prime or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool isprime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true){
        cout<<"This is a prime number..";
    }else{
        cout<<"This is NOT a prime number..";
    }
    return 0;
}