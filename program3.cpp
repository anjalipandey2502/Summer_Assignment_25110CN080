//program3--wap to find factorial of a given number
#include <iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter number whose factorial you want to find: ";
    cin>>n;
    if(n<0){
        cout<<"Number must be positive..";
    } else if(n==0){
        cout<<"Factorial of "<<n<<" is 1"<<endl;
    }else{
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    }
    return 0;
}