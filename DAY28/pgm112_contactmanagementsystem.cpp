//Contact management system
#include <bits/stdc++.h>
using namespace std;
struct contact{
    int id;
    string name;
    string phone;
};
int main(){
    vector<contact>book;
    int choice;
    cout<<"////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"              CONTACT MANAGEMENT SYSTEM"<<endl;
    cout<<"////////////////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"  MENU"<<endl;
        cout<<"1.Add new Contact."<<endl;
        cout<<"2.Display Phone book."<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice(1-3):"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{ 
                contact c;
                cout<<"Enter contact id: "<<endl;
                cin>>c.id;
                cout<<"Enter name: "<<endl;
                cin>>ws;
                getline(cin,c.name);
                cout<<"Enter Phone number: "<<endl;
                getline(cin,c.phone);
                book.push_back(c);
                cout<<"Contact saved successfully..."<<endl;
                break;
            }
            case 2:{
                if(book.empty()){
                    cout<<"No record..";
                }else{
                    cout<<"CONTACT DATA:  "<<endl;
                    cout<<left<<setw(10)<<"ID"<<setw(30)<<"NAME"<<setw(20)<<"PHONE NUMBER"<<endl;
                    for(auto it:book){
                        cout<<left<<setw(10)<<it.id<<setw(30)<<it.name<<setw(20)<<it.phone<<endl;
                    }
                }
                break;
            }
            case 3:
                cout<<"Thank you...for using contact management system..."<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }while(choice>=1 && choice<3);
    return 0;
}