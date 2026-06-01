//program18..wap to check strong number
#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    if (n==0||n==1){
        return 1;
    }
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,ld,k=0;
    cout<<"Enter the number: ";
    cin>>n;
    int num=n;
    while(num>0){
        ld=num%10;
        k=k+factorial(ld);
        num=num/10;
    }
    if(k==n){
        cout<<"It is a strong number..";
    }else{
        cout<<"It is not a strong number..";
    }
    return 0;
}