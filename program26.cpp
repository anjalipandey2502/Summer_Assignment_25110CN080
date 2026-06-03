//pgm26..wap to recursive fibonacci
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter number of terms in fibonacci: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<"\t";
    }
    return 0;
}