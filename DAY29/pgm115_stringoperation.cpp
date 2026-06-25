//menu driven string operations system
#include <bits/stdc++.h>
using namespace std;
int main(){
    int choice;
    cout<<"////////////////////////////////////////////////////////"<<endl;
    cout<<"          STRING OPERATIONS SYSTEM"<<endl;
    cout<<"////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"   STRING MENU"<<endl;
        cout<<"1.Find length of the string."<<endl;
        cout<<"2.Reverse a string."<<endl;
        cout<<"3.Concatenate a string."<<endl;
        cout<<"4.Exit."<<endl;
        cout<<"Enter your choice(1-4):"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                string str;
                cout<<"Enter a string: ";
                cin>>ws;
                getline(cin,str);
                int length=0;
                while(str[length]!='\0'){
                    length++;
                }
                cout<<"The length of the string is: "<<length<<endl;
                break;
            }
            case 2:{
                string str;
                cout<<"Enter string to reverse: ";
                cin>>ws;
                getline(cin,str);
                string dup=str;
                int n=str.length();
                for(int i=0;i<n/2;i++){
                    swap(str[i],str[n-i-1]);
                }
                cout<<"Original string: "<<dup<<endl;
                cout<<"Reversed string: "<<str<<endl;
                break;
            }
            case 3:{
                string str1,str2;
                cout<<"Enter first string:";
                cin>>ws;
                getline(cin,str1);
                cout<<"Enter second string:";
                getline(cin,str2);
                string result=str1+" "+str2;
                cout<<"Concatenated string result: "<<result<<endl;
                break;
            }
            case 4:
                cout<<"Thank you for using string operations system."<<endl;
                break;
            default:
                cout<<"Invalid input."<<endl;
                break;
        }
    }while(choice>=1 && choice<4);
    return 0;
}