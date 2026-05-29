//program7--wap to find product of digits
#include <iostream>
using namespace std;
int main(){
    int n,ld,pro=1;
    cout<<"Enter number: ";
    cin>>n;
    while(n>0){
        ld=n%10;
        pro*=ld;
        n=n/10;
    }
    cout<<"Product of digits is: "<<pro;
    return 0;
}