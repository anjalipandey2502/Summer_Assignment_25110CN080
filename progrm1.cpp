//program 1--wap to calculate sum of first n natural numbers
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    sum=n*(n+1)/2;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    return 0;
}
