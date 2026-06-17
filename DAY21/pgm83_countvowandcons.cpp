//count vowels and consonants
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin , s);
    int len=s.length();
    int vowel=0,cons=0;
    for(int i=0;i<len;i++){
        s[i]=tolower(s[i]);
        if(s[i]>='a' && s[i]<='z'){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowel++;
            }
            else{
                cons++;
            }
        }
    }
    cout<<"Total vowels are: "<<vowel<<endl;
    cout<<"Total consonants are: "<<cons<<endl;
    return 0;
}