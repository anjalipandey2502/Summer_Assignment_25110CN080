//column wise sum
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
    }//column wise sum
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum+=mat[i][j];
        }
        cout<<"Sum for "<<(j + 1)<<"th column is "<<sum<<endl;
    }
    return 0;
}