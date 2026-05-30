//program10--wap to print prime numbers in a range of numbers
#include <iostream>
using namespace std;
int main(){
    int frst,last;
    cout<<"Enter upper and lower limit of the range: ";
    cin>>frst>>last;
    cout<<"Prime numbers in the range are: ";
    for(int i=frst;i<=last;i++){
        bool isprime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isprime=false;
            }
        }
        if(isprime==true){
            cout<<i<<"\t";
        }
    }
    return 0;
}