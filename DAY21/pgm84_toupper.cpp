//convert lowercase to uppercase
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    int len=s.length();
    for(int i=0;i<len;i++){
        s[i]=toupper(s[i]);
    }
    cout<<"Uppercase string is "<<s<<endl;
    return 0;
}