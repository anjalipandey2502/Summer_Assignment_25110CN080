//check anagram string
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter string 1: ";
    getline(cin,s1);
    cout<<"Enter string 2: ";
    getline(cin,s2);
    if(s1.length()!=s2.length()){
        cout<<"Strings are not Anagram...";
        return 0;
    }
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);//no difference for uppercase letters
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    int hash[256]={0};
    for(int i=0;i<s1.length();i++){
        hash[s1[i]]++;//increases it to n freq
        hash[s2[i]]--;//decreases it to 0 again
    }
    for(auto it:hash){
        if(it!=0){
            cout<<"Strings are not Anagram..";
            return 0;
        }
    }
    cout<<"Strings are Anagram...";
    return 0;
}