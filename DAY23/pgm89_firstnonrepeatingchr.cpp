//first non repeating character
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    //precomputation
    int hash[256]={0};
    for(auto it: s){
        hash[it]++;
    }
    for(auto it:s){
        if(hash[it]==1){
            cout<<it<<endl;
            return 0;
        }
    }
    return 0;
}