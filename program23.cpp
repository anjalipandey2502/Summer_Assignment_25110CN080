//pgm 23...wap to count set bits(1s) in a number
#include <iostream>
using namespace std;
int setbits(int n){
    int num,count=0;
    while(n>0){
        num=n & 1;
        if(num==1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int n,ans;
    cout<<"Enter number: ";
    cin>>n;
    ans=setbits(n);
    cout<<"Number of Set Bits in "<<n<<" is "<<ans<<endl;
}