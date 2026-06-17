//reverse a string
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    int len=s.length();//find length
    int i=0,j=len-1;
    while(i<j){//traverse one by one
        swap(s[i],s[j]);
         i++;
         j--;
    }
    cout<<s<<endl;
    return 0;
}