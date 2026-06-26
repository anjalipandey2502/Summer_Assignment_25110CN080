//mini library
#include <bits/stdc++.h>
using namespace std;
int main(){
    int bookid[100];
    string bookname[100];
    int n=0,choice;
    do{
        cout<<"///////////////////////////////////////////////////////"<<endl;
        cout<<"            MINI LIBRARY SYSTEM"<<endl;
        cout<<"///////////////////////////////////////////////////////"<<endl;
        cout<<"MENU"<<endl;
        cout<<"1.Add Book."<<endl;
        cout<<"2.Display books."<<endl;
        cout<<"3.Search book."<<endl;
        cout<<"4.Exit."<<endl;
        cout<<"Enter choice."<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter book id: "<<endl;
                cin>>bookid[n];
                cout<<"Enter book name: "<<endl;
                cin>>bookname[n];
                n++;
                cout<<"Book added successfully..."<<endl;
                break;
            case 2:
                cout<<"\nBook id\t\t\t\tBook Name\n";
                for(int i=0;i<n;i++){
                    cout<<bookid[i]<<"\t\t\t\t"<<bookname[i]<<endl;
                }
                break;
            case 3:
                {
                    int search;
                    bool found=false;
                    cout<<"Enter book id to search:"<<endl;
                    cin>>search;
                    for(int i=0;i<n;i++){
                        if(bookid[i]==search){
                            cout<<"Book found.."<<endl;
                            cout<<"Book id: "<<bookid[i]<<endl;
                            cout<<"Book name: "<<bookname[i]<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(found==false){
                        cout<<"Book not found.."<<endl;
                    }
                    break;
                }
            case 4:
                cout<<"Thank you for using mini library system.."<<endl;
                break;
            default:
                cout<<"Invalid choice.."<<endl;
                break;
        }
    }while(choice>=1 && choice<4);
    return 0;
}