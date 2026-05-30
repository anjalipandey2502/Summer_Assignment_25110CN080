//program12--wap to print lcm of two numbers
#include <iostream>
using namespace std;
int main(){
    int a , b ,lcm=1;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for(int i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    }
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm<<endl;
    return 0;
}