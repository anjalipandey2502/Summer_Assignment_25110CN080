//Marksheet generation system
#include <bits/stdc++.h>
using namespace std;
struct studentmksheet{
    int rollno;
    string name;
    double physics;
    double chemistry;
    double math;
    double total;
    double percentage;
    string grade;
};
int main(){
    vector<studentmksheet> record;
    int choice;
    cout<<"///////////////////////////////////////////////////////////"<<endl;
    cout<<"        MARKSHEET GENERATION SYSTEM"<<endl;
    cout<<"///////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"  MENU"<<endl;
        cout<<"1. Input marks data of student."<<endl;
        cout<<"2.Generate marksheet"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice(1-3):"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{ 
                studentmksheet student;
                cout<<"Enter roll number: "<<endl;
                cin>>student.rollno;
                cout<<"Enter student name: "<<endl;
                cin>>ws;
                getline(cin,student.name);
                cout<<"Enter marks for Physics (out of 100): "<<endl;
                cin>>student.physics;
                cout<<"Enter marks for Chemistry (out of 100): "<<endl;
                cin>>student.chemistry;
                cout<<"Enter marks for Mathematics (out of 100): "<<endl;
                cin>>student.math;
                student.total=student.physics+student.chemistry+student.math;
                student.percentage=(student.total/300.0)*100;
                if(student.percentage>=90) student.grade="A+";
                else if(student.percentage>=75) student.grade="A";
                else if(student.percentage>=60) student.grade="B";
                else if(student.percentage>=50) student.grade="C";
                else if(student.percentage>=33) student.grade="D";
                else student.grade="F(Fail)";
                record.push_back(student);
                cout<<"Marks added successfully..."<<endl;
                break;
            }
            case 2:{
                if(record.empty()){
                    cout<<"No record..";
                }else{
                    for(auto it:record){
                        cout<<"Official academic marksheet.."<<endl;
                        cout<<"Roll number: "<<it.rollno<<endl;
                        cout<<"Student name: "<<it.name<<endl;
                        cout<<left<<setw(30)<<"Subject"<<"Marks obtained(out of 100)"<<endl;
                        cout<<setw(30)<<"Physics"<<it.physics<<endl;
                        cout<<setw(30)<<"Chemistry"<<it.chemistry<<endl;
                        cout<<setw(30)<<"Maths"<<it.math<<endl;
                        cout<<setw(30)<<"Total marks: "<<it.total<<endl;
                        cout<<setw(30)<<"Percentage: "<<it.percentage<<"%"<<endl;
                        cout<<setw(30)<<"Final grade: "<<it.grade<<endl;
                    }
                }
                break;
            }
            case 3:
                cout<<"Thank you...for using student marksheet generation system"<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }while(choice>=1 && choice<3);
    return 0;
}