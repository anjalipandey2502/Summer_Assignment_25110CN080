//program4--wap to count digits in a number
#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"Number of digits in the entered number is "<<count<<endl;
    return 0;
}