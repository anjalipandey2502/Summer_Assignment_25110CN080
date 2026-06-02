//pgm24...wap to calculate x^n without pow() function
#include <iostream>
using namespace std;
long long power(int x , int n){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans*=x;
    }
    return ans;
}
double negpower(int x , int n){
    double ans=1;
    n*= -1;
    for(int i=1;i<=n;i++){
        ans=ans/x;
    }
    return ans;
}
int main(){
    int x,n;
    long long ans;
    double neans;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>n;
    if(n>=0){
        ans=power(x,n);
        cout<<x<<" raised to the power "<<n<<" is "<<ans<<endl;
    }else{
        neans=negpower(x,n);
        cout<<x<<" raised to the power "<<n<<" is "<<neans<<endl;
    }
    return 0;
}