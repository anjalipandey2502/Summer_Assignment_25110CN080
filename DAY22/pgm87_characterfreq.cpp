//character frequency
//i'll do with the method of character hashing
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
    int q;
    cout<<"Enter number of queries to fetch: ";
    cin>>q;
    while(q--){
        char ch;
        cout<<"Enter character to fetch: ";
        cin>>ch;
        //fetch
        cout<<hash[ch]<<endl;
    }
    return 0;
}