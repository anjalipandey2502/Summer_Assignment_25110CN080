//employee management system
#include <bits/stdc++.h>
using namespace std;
int main(){
    int empid[100],salary[100];
    string empname[100];
    int n=0,choice;
    do{
        cout<<"///////////////////////////////////////////////////////"<<endl;
        cout<<"           EMPLOYEE MANAGEMENT SYSTEM"<<endl;
        cout<<"///////////////////////////////////////////////////////"<<endl;
        cout<<"MENU"<<endl;
        cout<<"1.Add employee."<<endl;
        cout<<"2.Display employees."<<endl;
        cout<<"3.Search employee."<<endl;
        cout<<"4.Update salary."<<endl;
        cout<<"5.Exit."<<endl;
        cout<<"Enter choice."<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter employee id: "<<endl;
                cin>>empid[n];
                cout<<"Enter employee name: "<<endl;
                cin>>empname[n];
                cout<<"Enter salary: "<<endl;
                cin>>salary[n];
                n++;
                cout<<"Employee added successfully..."<<endl;
                break;
            case 2:
                cout<<"\nID\t\tName\t\tSalary\n";
                for(int i=0;i<n;i++){
                    cout<<empid[i]<<"\t\t"<<empname[i]<<"\t\t"<<salary[i]<<endl;
                }
                break;
            case 3:
                {
                    int search;
                    bool found=false;
                    cout<<"Enter employee id to search:"<<endl;
                    cin>>search;
                    for(int i=0;i<n;i++){
                        if(empid[i]==search){
                            cout<<"Employee found.."<<endl;
                            cout<<"Name: "<<empname[i]<<endl;
                            cout<<"Salary: "<<salary[i]<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(found==false){
                        cout<<"Employee not found.."<<endl;
                    }
                    break;
                }
            case 4:{
                int update;
                cout<<"Enter employee id: "<<endl;
                cin>>update;
                bool found=false;
                for(int i=0;i<n;i++){
                    if(empid[i]==update){
                        cout<<"Enter new salary: ";
                        cin>>salary[i];
                        cout<<"Salary updated..."<<endl;
                        found=true;
                        break;
                    }
                }
                if(found==false) cout<<"Employee not found...."<<endl;
                break;
            }
            case 5:
                cout<<"Thank you for using employee management system.."<<endl;
                break;
            default:
                cout<<"Invalid choice.."<<endl;
                break;
        }
    }while(choice>=1 && choice<5);
    return 0;
}