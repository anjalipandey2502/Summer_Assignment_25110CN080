//pgm39...wap to print number pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=0;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            k++;
            cout<<k;
        }
        for(int j=1;j<i;j++){
            k--;
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}