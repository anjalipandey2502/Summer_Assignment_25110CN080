//remove spaces from string
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    stringstream ss(s);
    string dup="";
    string word;
    while(ss>>word){
        dup+=word;
    }
    cout<<"Modified string is: "<<dup<<endl;
    return 0;
}