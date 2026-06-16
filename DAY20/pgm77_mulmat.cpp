//multiply matrices
#include <iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter rows and columns for first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns for second matrix: ";
    cin>>r2>>c2;
    int A[r1][c1],B[r2][c2],C[r1][c2];
    if(c1!=r2){
        cout<<"Multiplication is not valid...";
        return 0;
    }
    cout<<"Enter matrix 1 elements: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter matrix 2 elements: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j]=0;
            for(int k=0;k<c1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"Product Matrix: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}