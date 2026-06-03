//program27...wap to recursive sum of digits
#include <iostream>
using namespace std;
int sod(int n){
    if(n<10){
        return n;
    }
    return (n%10)+sod(n/10);
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Sum of digits: "<<sod(n)<<endl;
    return 0;
}