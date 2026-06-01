//program20...wap to print largest prime factor
#include <iostream>
using namespace std;
bool is_prime(int n){
    bool prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            return prime;
        }
    }
    return prime;
}
int main(){
    int n,count,maxprime=0;
    bool t;
    cout<<"Enter number: ";
    cin>>n;
    for(long long int i=2;i<=n;i++){
        if(n%i==0){
            t=is_prime(i);
            if(t==true){
            maxprime=i;
        }
        }
    }
    cout<<"Maximum prime factor is: ";
    if(maxprime!=0){
        cout<<maxprime<<endl;
    }
    return 0;
}