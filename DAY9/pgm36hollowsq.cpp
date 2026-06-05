//wap to print hollow square pattern
//to print reverse star pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int i=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n ||j==n){
                cout<<"*";
            }else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}