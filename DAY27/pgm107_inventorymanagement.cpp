//inventory management system
#include <bits/stdc++.h>
using namespace std;
struct salary{
    int id;
    string name;
    double salary;
};
int main(){
    vector<salary>payment;
    int choice;
    cout<<"////////////////////////////////////////////////////////"<<endl;
    cout<<"          SALARY MANAGEMENT SYSTEM            "<<endl;
    cout<<"////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"    MENU"<<endl;
        cout<<"1.Add employee salary."<<endl;
        cout<<"2.Generate pay slip."<<endl;
        cout<<"3.Exit."<<endl;
        cout<<"Enter your choice(1-3): "<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                salary temp;
                cout<<"Enter employee id: ";
                cin>>temp.id;
                cout<<"Enter employee Name: ";
                cin>>ws;
                getline(cin,temp.name);
                cout<<"Enter salary: ";
                cin>>temp.salary;
                payment.push_back(temp);
                cout<<"Employee salary added successfully..."<<endl;
                break;
            }
            case 2:{
                if(payment.empty()){
                    cout<<"Empty document.."<<endl;
                }else{
                    cout<<"    CURRENT DETAILS "<<endl;
                    cout<<left<<setw(20)<<"Employee ID"<<setw(20)<<"Employee name"<<setw(10)<<"Salary"<<endl;
                    for(auto it:payment){
                        cout<<left<<setw(20)<<it.id<<setw(20)<<it.name<<setw(10)<<it.salary<<endl;
                    }
                    cout<<endl;
                }
                break;
            }
            case 3:
                cout<<"Thank you for using salary management system.."<<endl;
                break;
            default:
                cout<<"Invalid choice..."<<endl;
                break;
        }
    }  while(choice>=1 && choice<3);   
    return 0;
}