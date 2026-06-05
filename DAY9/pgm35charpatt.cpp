//to print repeated character pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    char k='A';
    for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
        cout<<k;
       }k++;
        cout<<endl;
    }
    return 0;
}