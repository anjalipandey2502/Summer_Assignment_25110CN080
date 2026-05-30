//program11--wap to find GCD of two numbers
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int gcd;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd;
    return 0;
}