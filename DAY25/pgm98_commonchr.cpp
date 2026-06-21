//find common characters
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter first string: ";//input first string
    getline(cin,s1);
    cout<<"Enter second string: ";//input second string
    getline(cin,s2);
    //precomputation
    int hashs1[256]={0};//create hash array
    int hashs2[256]={0};//create hash array
    for(auto it:s1){
        hashs1[it]++;//update hash arrays
    }
    for(auto it:s2){
        hashs2[it]++;
    }cout<<"Common characters: ";
    for(int i=0;i<256;i++){
        if(i==' ') continue;//ignore whitespaces--don't count it as common character
        if(hashs1[i]>0 && hashs2[i]>0){
            int cnt=min(hashs1[i],hashs2[i]);//minimize number of iterations
            for(int k=0;k<cnt;k++){
                cout<<(char)i<<" ";//output common characters
            }
        }
    }
    return 0;
}