//count words
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    stringstream ss(s);//breaks sentence into words
    string part;
    int count=0;
    while(ss>>part){//push words into part
        count++;
    }
    cout<<"Number of words are "<<count<<endl;
    return 0;
}