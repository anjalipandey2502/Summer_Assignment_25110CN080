//pgm22...wap to convert binary into decimal
#include <iostream>
using namespace std;
int bintodec(int n){
    int rem,num=0,pow=1;
    while(n>0){
        rem=n%10;
        num=num+rem*pow;
        pow*=2;
        n/=10;
    }
    return num;
}
int main(){
    int n,num;
    cout<<"Enter the number: ";
    cin>>n;
    num=bintodec(n);
    cout<<"Decimal equivalent of "<<n<<" is "<<num<<endl;
    return 0;
}