//program 6--wap to reverse a number
#include <iostream>
using namespace std;
int main(){
    int n,ld,rev=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
        ld=n%10;
        n=n/10;
        rev=(rev*10)+ld;
    }
    cout<<"Reverse number will be: "<<rev;
    return 0;
}