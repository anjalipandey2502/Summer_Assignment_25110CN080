//longest word
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a sentence: ";
    getline(cin,s);
    string longest="";
    string current="";
    for(int i=0;i<=s.length();i++){
        if(i<s.length() && s[i]!=' '){
            current+=s[i];
        }
        else{
            if(current.length()>longest.length()){
                longest=current;
            }
            current="";
        }
    }
    cout<<"Longest word is: "<<longest<<endl;
    return 0;
}