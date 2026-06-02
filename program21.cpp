//pgm 21..wap to convert decimal to binary
#include <iostream>
using namespace std;
int dectobin(int n){
    int rem,num=0,pow=1;
    while(n>0){
        rem=n%2;
        num=num+rem*pow;
        n/=2;
        pow*=10;
    }
    return num;
}
int main(){
    int n,num;
    cout<<"Enter number: ";
    cin>>n;
    num=dectobin(n);
    cout<<"Binary equivalent of "<<n<<" is "<<num<<endl;
    return 0;
}