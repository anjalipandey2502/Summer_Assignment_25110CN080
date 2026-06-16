//row wise sum
#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter row and column size: ";
    cin>>r>>c;
    int mat[r][c];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=mat[i][j];
        }
        cout<<"Sum for "<<(i + 1)<<"th row is "<<sum<<endl;
    }
    return 0;
}