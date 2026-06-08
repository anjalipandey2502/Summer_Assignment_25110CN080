//function for fibonacci
#include <iostream>
using namespace std;
void fibonacci(int n){
    int next,frst=0,sec=1;
    if(n>=1){
        cout<<frst<<" ";
    }if(n>=2){
        cout<<sec<<" ";
    }
    for(int i=2;i<n;i++){
        next=frst+sec;
        cout<<next<<" ";
        frst=sec;
        sec=next;
    }
}
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    fibonacci(n);
    return 0;
}