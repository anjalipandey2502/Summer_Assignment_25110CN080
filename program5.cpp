//program 5--Wap to find the sum of digits of a number
#include <iostream>
using namespace std;
int main(){
    int n,ld,sum=0;
    cout<<"Enter number: ";
    cin>>n;
    while(n>0){
        ld=n%10;
        n=n/10;
        sum+=ld;
    }
    cout<<"Sum of the digits is: "<<sum;
    return 0;
}