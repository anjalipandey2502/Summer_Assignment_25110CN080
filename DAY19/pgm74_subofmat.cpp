//subtraction of matrices
#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter rows and columns for matrices: ";
    cin>>row>>col;
    int mat1[row][col],mat2[row][col],sub[row][col];
    cout<<"Enter elements of matrix 1: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter elements of matrix 2: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat2[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sub[i][j]=mat1[i][j]-mat2[i][j];
        }
    }cout<<"Subtracted matrix elements are: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<sub[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}