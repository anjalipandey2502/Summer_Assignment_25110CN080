//symmetric matrix-->only for square matix..transpose will be equal to the original matrix 
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter size: ";
    cin>>x;
    int mat[x][x];
    cout<<"Enter elements:\n ";
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin>>mat[i][j];
        }
    }bool symm=true;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(mat[i][j]!=mat[j][i]){
                symm=false;
                break;
            }
        }
    }
    if(symm){
        cout<<"Matrix is symmetric.."<<endl;
    }else{
        cout<<"Matrix is asymmetric.."<<endl;
    }
    return 0;
}