//program28...wap to recursive reverse number..
#include <iostream>
using namespace std;
int reverse(int n,int rev=0){
    if(n==0){
        return rev;
    }
    rev=(rev*10)+(n%10);
    return reverse(n/10,rev);
}
int main(){
    int n,rev=0;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Reversed number is : "<<reverse(n,rev);
    return 0;
}