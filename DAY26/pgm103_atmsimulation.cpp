//ATM Simulation
#include <bits/stdc++.h>
using namespace std;
int main(){
    double balance=1000.0;
    int choice;
    double amount;
    cout<<"////////////////////////////////////////////////////"<<endl;
    cout<<"             AUTOMATED TELLER MACHINE               "<<endl;
    cout<<"////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"ATM MAIN MENU\n"<<endl;//prints the main menu
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit "<<endl;
        cout<<"3. Withdraw"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter choice(1-4)"<<endl;//give options
        cin>>choice;
        switch(choice){//switch case started
            case 1:
                cout<<"Your current balance is: Rs "<<balance<<endl;
                break;
            case 2:
                cout<<"Enter deposit amount: Rs";
                cin>>amount;
                if(amount>0){
                    balance+=amount;
                    cout<<"Succesfully deposited.."<<endl;
                    cout<<"Your current balance: "<<balance<<endl;
                }else{
                    cout<<"INVALID.."<<endl;
                }
                break;
            case 3:
                cout<<"Enter withdrawal amount: ";
                cin>>amount;
                if(amount>balance || amount<=0){
                    cout<<"Invalid.."<<endl;
                }else{
                    balance-=amount;
                    cout<<"Successfully withdrew..."<<endl;
                    cout<<"Your current balance: "<<balance<<endl;
                }
                break;
            case 4:
                cout<<"Thank you for using this ATM Simulation.."<<endl;
                break;
            default:
                cout<<"Invalid choice.."<<endl;//no need of break
        }
    }while(choice>=1 && choice<4);
    return 0;
}