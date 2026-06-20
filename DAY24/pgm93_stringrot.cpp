//string rotation
#include <bits/stdc++.h>
using namespace std;
bool rotation(string s1,string s2){
    if(s1.length()!=s2.length())   return false;
    for(int i=0;i<s1.length();i++){
        if(s2[i]==s1[0]){
            int j=0;
            while(j<s1.length() && s1[j]==s2[(i+j)%s1.length()]){
                j++;
            }
            if(j==s1.length()){
                return true;
            }
        }
    }
}
int main(){
    string s1,s2;
    cout<<"Enter string s1: ";
    getline(cin,s1);
    cout<<"Enter string s2: ";
    getline(cin,s2);
    if(rotation(s1,s2)){
        cout<<"Strings are rotation of each other."<<endl;
    }else{
        cout<<"Strings are not rotation of each other."<<endl;
    }
    return 0;
}