//maximum frequency character
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    //precomputation
    int hash[256]={0};
    for(auto it:s){
        hash[it]++;
    }
    int max=0;
    char maxele=' ';
    for(auto it:s){
        if(it!=' '){
            if(hash[it]>max){
                max=hash[it];
                maxele=it;
            }
        }
    }
    if(max>0){
        cout<<"Maximum element is "<<maxele<<" with the "<<max<<" frequency"<<endl;
    }else{
        cout<<"Enter valid string.."<<endl;
    }
    return 0;
}