//pgm42...function to find maximum
#include <iostream>
using namespace std;
int maximum(int a,int b){
    int max;
    if(a==b){
        return 0;
    }
    max=(a>b)?a:b;
    return max;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Maximum of two numbers is "<<maximum(a,b)<<endl;
    return 0;
}