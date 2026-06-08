//function for palindrome
#include <iostream>
using namespace std;
bool palindrome(int n){
    int orig=n;
    int rev=0;
    while(n>0){
        rev=(rev*10)+(n%10);
        n/=10;
    } 
    if(rev==orig) return true;
    return false; 
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool ispalin=palindrome(n);
    if(ispalin==true){
        cout<<"The number is a palindrome.";
    }else{
        cout<<"The number is not a palindrome.";
    }
    return 0;
}