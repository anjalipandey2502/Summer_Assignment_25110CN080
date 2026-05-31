//program14--wap to find nth fibonacci term
#include <iostream>
using namespace std;
int main(){
    int n,k=0;
    cout<<"Enter nth term you want to print fibonacci for: ";
    cin>>n;
    int first_term=0,second_term=1,next_term;
    if(n==1){
        cout<<"1st term is : "<<first_term;
    }
    if(n==2){
        cout<<"2nd term is : "<<second_term;
    }
    for(int i=3;i<=n;i++){
        next_term=first_term+second_term;
        first_term=second_term;
        second_term=next_term;
        k=i;
    }
    if(k>=3){
        cout<"The term is "<<next_term;
    }
    return 0;
}