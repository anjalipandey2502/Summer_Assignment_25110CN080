//palindrome string
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    string dup=s;
    int len=s.length();
    int i=0;
    for(auto it:s){
        if(i<len/2){
            s[len-i-1]=it;
            i++;
        }
    }
    if(dup==s) cout<<"Palindrome";
    else cout<<"Not palindrome";
    return 0;
}