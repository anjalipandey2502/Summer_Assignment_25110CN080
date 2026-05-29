//program8--wap to check whether a number is palindrome or not
#include <iostream>
using namespace std;
int main(){
    int n,d,ld,rev=0;
    cout<<"Enter number: ";
    cin>>n;
    d=n;
    while(n>0){
        ld=n%10;
        n=n/10;
        rev=(rev*10)+ld;
    }
    if(rev==d){
        cout<<"It is a palindrome number.";
    }else{
        cout<<"It is not a palindrome number.";
    }
    return 0;
}