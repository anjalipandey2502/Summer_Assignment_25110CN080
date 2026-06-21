//sort name in alphabetical order
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of names: ";//input from user
    cin>>n;
    vector<string>vec(n);
    cout<<"Enter names: ";//input names
    for(int i=0;i<n;i++){
        getline(cin,vec[i]);
    }
    sort(vec.begin(),vec.end());//sort them in order
    cout<<"Names in sorted order: "<<endl;
    for(int i=0;i<n;i++){
        cout<<vec[i]<<"   ";//output the sorted names
    }
    return 0;
}