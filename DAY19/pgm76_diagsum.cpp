//diagonal sum
#include <bits/stdc++.h>//it include all the standard libraries in c++
using namespace std;
int main(){
    int x;
    cout<<"Enter size: ";//diagonal is only for square matrix
    cin>>x;
    int mat[x][x];
    cout<<"Enter elements: ";
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin>>mat[i][j];
        }
    }int sum=0;
    for(int i=0;i<x;i++){
        sum+=mat[i][i];
    } 
    cout<<"Diagonal sum is "<<sum<<endl;
    return 0;
}