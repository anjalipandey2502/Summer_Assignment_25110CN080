//transpose of matrix
#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter row and column: ";
    cin>>r>>c;
    int mat[r][c];
    cout<<"Enter elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }cout<<"Transpose matrix:"<<endl;
    for(int i=0;i<c;i++){/*it'll not create any transpose matrix but print it directly*/
        for(int j=0;j<r;j++){
            cout<<mat[j][i]<<" ";
        }cout<<endl;//to reduce space complexity
    }
    return 0;
}