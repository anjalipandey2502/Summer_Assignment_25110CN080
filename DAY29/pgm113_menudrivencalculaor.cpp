//menu driven calculator
#include <bits/stdc++.h>
using namespace std;
int main(){
    int choice;
    double num1,num2,result;
    cout<<"///////////////////////////////////////////////////////////"<<endl;
    cout<<"         MENU DRIVEN CALCULATOR"<<endl;
    cout<<"///////////////////////////////////////////////////////////"<<endl;
    do{
        cout<<"           MENU "<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice(1-5):"<<endl;
        cin>>choice;
        if(choice==5){
            cout<<"Thank you for using Calculator...Bye"<<endl;
            break;
        }
        if(choice<1 || choice>5){
            cout<<"Invalid choice"<<endl;
            continue;
        }
        cout<<"Enter first number: "<<endl;
        cin>>num1;
        cout<<"Enter second number: "<<endl;
        cin>>num2;
        switch (choice){
            case 1:
                result=num1+num2;
                cout<<"Answer: "<<num1<<"+"<<num2<<"="<<result<<endl;
                break;
            case 2:
                result=num1-num2;
                cout<<"Answer: "<<num1<<"-"<<num2<<"="<<result<<endl;
                break;
            case 3:
                result=num1*num2;
                cout<<"Answer: "<<num1<<"X"<<num2<<"="<<result<<endl;
                break;
            case 4:
                if(num2==0){
                    cout<<"Division by zero is not allowed..";
                }else{
                    result=num1/num2;
                    cout<<"Answer: "<<num1<<"/"<<num2<<"="<<result<<endl;
                }
                break;
        }
    }while(choice>=1 && choice<5);
    return 0;
}