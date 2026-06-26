//mini project-->movie ticket booking system
#include <bits/stdc++.h>
using namespace std;
const int size=100;
int ticketid[size],seats[size];
string moviename[size];
int n=0;
void bookticket(){
    cout<<"Enter ticket id:"<<endl;
    cin>> ticketid[n];
    cin.ignore();
    cout<<"Enter movie name:";
    getline(cin,moviename[n]);
    cout<<"Enter number of seats: ";
    cin>>seats[n];
    n++;
    cout<<"Ticket booked successfully.."<<endl;
}
void displaybookings(){
    if(n==0){
        cout<<"No bookings found..";
        return ;
    }
    cout<<"\nTicket id\tMovie name\tSeats\n";
    for(int i=0;i<n;i++){
        cout<<ticketid[i]<<"\t\t"<<moviename[i]<<"\t\t"<<seats[i]<<endl;
    }
}
void searchbooking(){
    int id;
    bool found=false;
    cout<<"Enter ticket id: ";
    cin>>id;
    for(int i=0;i<n;i++){
        if(ticketid[i]==id){
            cout<<"Booking found.."<<endl;
            cout<<"Movie name: "<<moviename[i]<<endl;
            cout<<"Seats: "<<seats[i]<<endl;
            found=true;
            break;
        }
    }
    if(found==false){
        cout<<"Booking not found.."<<endl;
    }
}
void cancelbooking(){
    int id;
    bool found=false;
    cout<<"Enter ticket id to cancel:";
    cin>>id;
    for(int i=0;i<n;i++){
        if(ticketid[i]==id){
            for(int j=i;j<n-1;j++){
                ticketid[j]=ticketid[j+1];
                moviename[j]=moviename[j+1];
                seats[j]=seats[j+1];
            }
            n--;
            found=true;
            cout<<"Booking cancelled successfully.."<<endl;
            break;
        }
    }
    if(found==false){
        cout<<"Booking not found.."<<endl;
    }
}
int main(){
    int choice;
    do{
        cout<<"/////////////////////////////////////////////////////////"<<endl;
        cout<<"              MOVIE TICKET BOOKING SYSTEM"<<endl;
        cout<<"/////////////////////////////////////////////////////////"<<endl;
        cout<<"MENU"<<endl;
        cout<<"1.Book ticket."<<endl;
        cout<<"2.Display bookings."<<endl;
        cout<<"3.Search booking."<<endl;
        cout<<"4.Cancel booking."<<endl;
        cout<<"5.Exit."<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:bookticket(); break;
            case 2:displaybookings(); break;
            case 3:searchbooking(); break;
            case 4:cancelbooking(); break;
            case 5:cout<<"Thank you.."<<endl; break;
            default:cout<<"Invalid choice..";
        }
    }while(choice>=1 && choice<5);
    return 0;
}