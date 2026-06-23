//student record management system
#include <bits/stdc++.h>
using namespace std;
struct student{
    int rollnum;
    string name;
    double marks;
};
int main(){
    vector<student>vec;
    int choice;
    cout<<"//////////////////////////////////////////////////////////////"<<endl;
    cout<<"                  STUDENT RECORD MANAGEMENT                   "<<endl;
    cout<<"//////////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<" MENU "<<endl;
        cout<<"1.Add Student record."<<endl;
        cout<<"2.Display all records."<<endl;
        cout<<"3.Exit."<<endl;
        cout<<"Enter choice(1-3): "<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                student newstu;
                cout<<"Enter Roll number: ";
                cin >>newstu.rollnum;
                cout<<"Enter Name: ";
                cin>>ws;
                getline(cin,newstu.name);
                cout<<"Enter marks: ";
                cin>>newstu.marks;
                vec.push_back(newstu);
                cout<<"Record added successfully..."<<endl;
                break;
            }
            case 2:{
                if(vec.empty()){
                    cout<<"No records found..."<<endl;
                }else{
                    cout<<"ALL STUDENTS RECORDS..."<<endl;
                    cout<<left<<setw(10)<<"Roll no"<<setw(20)<<"Name"<<"Marks"<<endl;
                    for(auto it:vec){
                        cout<<left<<setw(10)<<it.rollnum<<setw(20)<<it.name<<it.marks<<endl;
                    }
                }
                break;
            }
            case 3:{
                cout<<"Thank you for using Student Record Management System"<<endl;
                break;
            }
            default:{
                cout<<"Invalid input..."<<endl;
            }
        }
    }while(choice>=1 && choice<3);
    return 0;
}