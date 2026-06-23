//Employee management system
#include <bits/stdc++.h>
using namespace std;
struct employee{
    int id;
    string name;
    string designation;
    double salary;
};
int main(){
    vector<employee>employeelist;
    int choice;
    cout<<"////////////////////////////////////////////////////////////////"<<endl;
    cout<<"                  EMPLOYEE MANAGEMENT SYSTEM                    "<<endl;
    cout<<"////////////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"        MENU         "<<endl;
        cout<<"1.Add employee record."<<endl;
        cout<<"2.Display employee directory."<<endl;
        cout<<"3.Exit."<<endl;
        cout<<"Enter your choice(1-3): ";
        cin>>choice;
        switch(choice){
            case 1:{
                employee emp;
                cout<<"Enter Employee ID: ";
                cin>>emp.id;
                cout<<"Enter Name: ";
                cin>>ws;
                getline(cin,emp.name);
                cout<<"Enter Designation: ";
                getline(cin,emp.designation);
                cout<<"Enter Monthly salary: ";
                cin>>emp.salary;
                employeelist.push_back(emp);
                cout<<"Employee record saved successfully.."<<endl;
                break;
            }
            case 2:{
                if(employeelist.empty()){
                    cout<<"No employee record found in the directory..."<<endl;
                }else{
                    cout<<"//////////////////////////////////////////////"<<endl;
                    cout<<"             EMPLOYEE DETAILS                "<<endl;
                    cout<<"//////////////////////////////////////////////"<<endl;
                    cout<<left<<setw(10)<<"Emp ID"<<setw(20)<<"Name"<<setw(20)<<"Designation"<<"Salary"<<endl;
                    for(auto it:employeelist){
                        cout<<left<<setw(10)<<it.id<<setw(20)<<it.name<<setw(20)<<it.designation<<it.salary<<endl;
                    }
                }
                break;
            }
            case 3:
                cout<<"Bye...thank you for using employee management system.."<<endl;
                break;
            default:
                cout<<"Invalid..."<<endl;
                break;
        }
    }while(choice>=1 && choice<3);
    return 0;
}