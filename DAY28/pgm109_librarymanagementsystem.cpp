//Library management system
#include <bits/stdc++.h>
using namespace std;
struct book{
    int id;
    string title;
    string author;
    bool isissued;
};
int main(){
    vector<book>library;
    int choice;
    cout<<"////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"               LIBRARY MANAGEMENT SYSTEM"<<endl;
    cout<<"////////////////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"  MENU"<<endl;
        cout<<"1.Add new book."<<endl;
        cout<<"2.Display Book catalog"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice(1-3):"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{ 
                book b;
                cout<<"Enter book id: "<<endl;
                cin>>b.id;
                cout<<"Enter book title: "<<endl;
                cin>>ws;
                getline(cin,b.title);
                cout<<"Enter author name: "<<endl;
                getline(cin,b.author);
                b.isissued=false;
                library.push_back(b);
                cout<<"Book added successfully..."<<endl;
                break;
            }
            case 2:{
                if(library.empty()){
                    cout<<"No record..";
                }else{
                    cout<<"LIBRARY DATA:  "<<endl;
                    cout<<left<<setw(10)<<"ID"<<setw(30)<<"Title"<<setw(20)<<"Author"<<"Status"<<endl;
                    for(auto it:library){
                        cout<<left<<setw(10)<<it.id<<setw(30)<<it.title<<setw(20)<<it.author;
                        if(it.isissued){
                            cout<<"Issued"<<endl;
                        }else{
                            cout<<"Available"<<endl;
                        }
                    }
                }
                break;
            }
            case 3:
                cout<<"Thank you...for using library management system"<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }while(choice>=1 && choice<3);
    return 0;
}
