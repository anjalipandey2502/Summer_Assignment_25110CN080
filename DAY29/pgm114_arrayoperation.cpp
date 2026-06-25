//menu driven array operations system
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"////////////////////////////////////////////////////////"<<endl;
    cout<<"            ARRAY OPERATIONS SYSTEM"<<endl;
    cout<<"////////////////////////////////////////////////////////"<<endl;
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    int currsize=0;
    int choice;
    do{
        cout<<" MENU"<<endl;
        cout<<"1. Insert element."<<endl;
        cout<<"2. Display array element."<<endl;
        cout<<"3.Search for an element."<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice(1-4):";
        cin>>choice;
        switch(choice){
            case 1:{
                if(currsize>=n){
                    cout<<"Array overflow.."<<endl;
                }else{
                    int element;
                    cout<<"Enter integer element to insert: ";
                    cin>>element;
                    arr[currsize]=element;
                    currsize++;
                    cout<<"Element added successfully.."<<endl;
                }
                break;
            }
            case 2:{
                if(currsize==0){
                    cout<<"Array is empty..."<<endl;
                }else{
                    cout<<"Array elements: "<<endl<<"[";
                    for(int i=0;i<currsize;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<"]"<<endl;
                }
                break;
            }
            case 3:
                if(currsize==0){
                    cout<<"Array is empty.."<<endl;
                }else{
                    int key;
                    bool found=false;
                    cout<<"Enter element to search for:"<<endl;
                    cin>>key;
                    for(int i=0;i<currsize;i++){
                        if(arr[i]==key){
                            cout<< "Element found at index "<<i<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(found==false){
                        cout<<"Element not found in array.."<<endl;
                    }
                }
                break;
            case 4:
                cout<<"Thank you for using array operation system.."<<endl;
                break;
            default:
                cout<<"Invalid input.."<<endl;
                break;
        }
    }while(choice>=1 && choice<4);
    return 0;
}