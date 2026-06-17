//string length
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int len=0;
    cout<<"Enter string: ";
    getline(cin , s);//inputs the string
    for(auto it: s){//iterator iterates in the string
        if(it !='\0'){ //for encountering end of line
            len++;
        }
    }
    cout<<"Length of the string is " << len<<endl;
    return 0;
}