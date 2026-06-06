//pgm40...wap to print character pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        char k='A';
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }k--;               //to nullify extra character in last step
        for(int j=1;j<i;j++){
            k--;
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}