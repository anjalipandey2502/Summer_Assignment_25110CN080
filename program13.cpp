//program12..wap to generate fibonacci series
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms you want to print: ";
    cin>>n;
    int first_term=0,second_term=1,next_term;
    cout<<first_term<<"\t"<<second_term<<"\t";
    for(int i=2;i<n;i++){
        next_term=first_term+second_term;
        cout<<next_term<<"\t";
        first_term=second_term;
        second_term=next_term;
    }
    return 0;
}