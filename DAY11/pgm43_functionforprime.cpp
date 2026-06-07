//pgm43...function to check prime
#include <iostream>
using namespace std;
bool isprime(int n){
    bool prime=1;
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime=0;
            return prime;
        }
    }
    return prime;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool prime=isprime(n);
    if (prime==1) cout<<"It is a prime number..";
    else cout<<"It is not a prime number..";
    return 0;
}