//Ticket booking system
#include <bits/stdc++.h>
using namespace std;
struct ticket{
    int id;
    string name;
    string destination;
    double price;
};
int main(){
    vector<ticket>booking;
    int choice;
    cout<<"////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"               TICKET BOOKING SYSTEM"<<endl;
    cout<<"////////////////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"  MENU"<<endl;
        cout<<"1.Book new ticket."<<endl;
        cout<<"2.Display all booked tickets."<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice(1-3):"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{ 
                ticket t;
                cout<<"Enter ticket id: "<<endl;
                cin>>t.id;
                cout<<"Enter customer name: "<<endl;
                cin>>ws;
                getline(cin,t.name);
                cout<<"Enter destination: "<<endl;
                getline(cin,t.destination);
                cout<<"Enter ticket price: "<<endl;
                cin>>t.price;
                booking.push_back(t);
                cout<<"Ticket reserved successfully..."<<endl;
                break;
            }
            case 2:{
                if(booking.empty()){
                    cout<<"No record..";
                }else{
                    cout<<"PASSENGER DATA:  "<<endl;
                    cout<<left<<setw(10)<<"ID"<<setw(30)<<"CUSTOMER NAME"<<setw(20)<<"DESTINATION"<<"PRICE"<<endl;
                    for(auto it:booking){
                        cout<<left<<setw(10)<<it.id<<setw(30)<<it.name<<setw(20)<<it.destination;
                        cout<<"Rs "<<it.price<<endl;
                    }
                }
                break;
            }
            case 3:
                cout<<"Thank you...for using ticket booking system..."<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }while(choice>=1 && choice<3);
    return 0;
}