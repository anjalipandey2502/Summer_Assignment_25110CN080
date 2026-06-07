//function for sum of two numbers
#include <iostream>
using namespace std;
int sumfunc(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum of two numbers is "<<sumfunc(a,b)<<endl;
    return 0;
}