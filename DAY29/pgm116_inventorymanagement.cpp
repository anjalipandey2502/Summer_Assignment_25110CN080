//inventory management system
#include <bits/stdc++.h>
using namespace std;
int main(){
    int id[100],qty[100];
    string name[100];
    int n=0,choice;
    do{
        cout<<"///////////////////////////////////////////////////////"<<endl;
        cout<<"      INVENTORY MANAGEMENT SYSTEM"<<endl;
        cout<<"///////////////////////////////////////////////////////"<<endl;
        cout<<"MENU"<<endl;
        cout<<"1.Add products."<<endl;
        cout<<"2.Display products."<<endl;
        cout<<"3.Search products."<<endl;
        cout<<"4.Update quantity."<<endl;
        cout<<"5.Exit."<<endl;
        cout<<"Enter choice."<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter product id: "<<endl;
                cin>>id[n];
                cout<<"Enter product name: "<<endl;
                cin>>name[n];
                cout<<"Enter quantity: "<<endl;
                cin>>qty[n];
                n++;
                cout<<"Product added successfully..."<<endl;
                break;
            case 2:
                cout<<"\nID\t\tName\t\tQuantity\n";
                for(int i=0;i<n;i++){
                    cout<<id[i]<<"\t\t"<<name[i]<<"\t\t"<<qty[i]<<endl;
                }
                break;
            case 3:
                {
                    int search;
                    bool found=false;
                    cout<<"Enter product id to search:"<<endl;
                    cin>>search;
                    for(int i=0;i<n;i++){
                        if(id[i]==search){
                            cout<<"Product found.."<<endl;
                            cout<<"Name: "<<name[i]<<endl;
                            cout<<"Quantity: "<<qty[i]<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(found==false){
                        cout<<"Product not found.."<<endl;
                    }
                    break;
                }
            case 4:{
                int update;
                cout<<"Enter product id: "<<endl;
                cin>>update;
                bool found=false;
                for(int i=0;i<n;i++){
                    if(id[i]==update){
                        cout<<"Enter new quantity: ";
                        cin>>qty[i];
                        cout<<"Quantity updated..."<<endl;
                        found=true;
                        break;
                    }
                }
                if(found==false) cout<<"Product not found...."<<endl;
                break;
            }
            case 5:
                cout<<"Thank you for using inventory management system.."<<endl;
                break;
            default:
                cout<<"Invalid choice.."<<endl;
                break;
        }
    }while(choice>=1 && choice<5);
    return 0;
}