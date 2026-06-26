//student record system
#include <bits/stdc++.h>
using namespace std;
int main(){
    int roll[100],marks[100];
    string name[100];
    int n=0,choice;
    do{
        cout<<"///////////////////////////////////////////////////////"<<endl;
        cout<<"          STUDENT RECORD SYSTEM"<<endl;
        cout<<"///////////////////////////////////////////////////////"<<endl;
        cout<<"MENU"<<endl;
        cout<<"1.Add student."<<endl;
        cout<<"2.Display students."<<endl;
        cout<<"3.Search student."<<endl;
        cout<<"4.Update marks."<<endl;
        cout<<"5.Exit."<<endl;
        cout<<"Enter choice."<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter roll number: "<<endl;
                cin>>roll[n];
                cout<<"Enter student name: "<<endl;
                cin>>name[n];
                cout<<"Enter marks: "<<endl;
                cin>>marks[n];
                n++;
                cout<<"Student added successfully..."<<endl;
                break;
            case 2:
                cout<<"\nROLL NO.\t\tName\t\tMarks\n";
                for(int i=0;i<n;i++){
                    cout<<roll[i]<<"\t\t"<<name[i]<<"\t\t"<<marks[i]<<endl;
                }
                break;
            case 3:
                {
                    int search;
                    bool found=false;
                    cout<<"Enter roll number to search:"<<endl;
                    cin>>search;
                    for(int i=0;i<n;i++){
                        if(roll[i]==search){
                            cout<<"Student found.."<<endl;
                            cout<<"Name: "<<name[i]<<endl;
                            cout<<"Marks: "<<marks[i]<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(found==false){
                        cout<<"Student not found.."<<endl;
                    }
                    break;
                }
            case 4:{
                int update;
                cout<<"Enter roll number: "<<endl;
                cin>>update;
                bool found=false;
                for(int i=0;i<n;i++){
                    if(roll[i]==update){
                        cout<<"Enter new marks: ";
                        cin>>marks[i];
                        cout<<"Marks updated..."<<endl;
                        found=true;
                        break;
                    }
                }
                if(found==false) cout<<"Student not found...."<<endl;
                break;
            }
            case 5:
                cout<<"Thank you for using student record system.."<<endl;
                break;
            default:
                cout<<"Invalid choice.."<<endl;
                break;
        }
    }while(choice>=1 && choice<5);
    return 0;
}