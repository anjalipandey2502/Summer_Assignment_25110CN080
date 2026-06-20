//remove duplicate characters
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    //precomputation
    int hash[256]={0};
    string dup="";
    for(auto it:s){
        if(hash[it]==0){
            dup+=it;
            hash[it]++;
        }
    }
    cout<<"After removing the duplicates...the string is.."<<dup<<endl;
    return 0;
}