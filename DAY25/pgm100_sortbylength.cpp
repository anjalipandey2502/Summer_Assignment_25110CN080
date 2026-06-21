//sort words by length
#include <bits/stdc++.h>
using namespace std;
bool compare(string s1,string s2){
    bool ans=s1.length()<s2.length();//compare length using your own definition
    return ans;
}
int main(){
    int n;
    cout<<"Enter number of words: ";//input 
    cin>>n;
    vector<string>vec(n);
    cout<<"Enter words: ";
    for(int i=0;i<n;i++){//input words from user
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end(),compare);//sort them according to your comparator
    cout<<"Sorted words are: "<<endl;
    for(auto it:vec){
        cout<<it<<endl;//print sorted names
    }
    return 0;
}