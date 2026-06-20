//compress a string
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    if(s.empty()){
        cout<<"String is empty..";
        return 0;
    }
    string dup="";
    int n=s.length();
    for(int i=0;i<n;i++){
        int cnt=1;
        while(i<n-1 && s[i]==s[i+1]){
            cnt++;
            i++;
        }
        dup+=s[i];
        dup+=to_string(cnt);
    }
    cout<<"Compressed string is "<<dup<<endl;
    return 0;
}