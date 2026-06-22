//voting eligibility system
#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int age;
    char ch;
    cout<<"WELCOME TO THE VOTING ELIGIBILITY SYSTEM"<<endl;
    cout<<"This system tests whether you are eligible for voting or not.."<<endl;
    cout<<"Go ahead:::::";
    do{
    cout<<"Enter voter's name:";
    cin>>ws;
    getline(cin,name);
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Result for "<<name<<"-----"<<endl;
    if(age>=18){
        cout<<"Hurray...you're eligible to vote"<<endl;
    }else{
        cout<<"Not eligible...You need to wait for "<<(18-age)<<" year(s) to cast your vote. "<<endl;
    }
    cout<<"Do you want to check another profile?(y/n):"<<endl;
    cin>>ch;
    }while(ch=='y' || ch=='Y');
    cout<<"Thank you for using THE VOTING ELIGIBILTY SYSTEM..";
    return 0;
}