//bank account system
#include <bits/stdc++.h>
using namespace std;
struct bankaccount{
    int accno;
    string name;
    string type;
    double balance;
};
int main(){
    vector<bankaccount>bank;
    int choice;
    cout<<"////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"               BANK ACCOUNT SYSTEM"<<endl;
    cout<<"////////////////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"  MENU"<<endl;
        cout<<"1.Create new bank account."<<endl;
        cout<<"2.Display all bank acounts."<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice(1-3):"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{ 
                bankaccount b;
                cout<<"Enter account number: "<<endl;
                cin>>b.accno;
                cout<<"Enter depositor name: "<<endl;
                cin>>ws;
                getline(cin,b.name);
                cout<<"Enter account type: "<<endl;
                getline(cin,b.type);
                cout<<"Enter initial balance: "<<endl;
                cin>>b.balance;
                bank.push_back(b);
                cout<<"Bank account registered successfully..."<<endl;
                break;
            }
            case 2:{
                if(bank.empty()){
                    cout<<"No record..";
                }else{
                    cout<<"CUSTOMER DATA:  "<<endl;
                    cout<<left<<setw(10)<<"ACC NO"<<setw(30)<<"ACCOUNT HOLDER"<<setw(20)<<"TYPE"<<"BALANCE"<<endl;
                    for(auto it:bank){
                        cout<<left<<setw(10)<<it.accno<<setw(30)<<it.name<<setw(20)<<it.type;
                        cout<<"Rs"<<it.balance<<endl;
                    }
                }
                break;
            }
            case 3:
                cout<<"Thank you...for using bank account system..."<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }while(choice>=1 && choice<3);
    return 0;
}