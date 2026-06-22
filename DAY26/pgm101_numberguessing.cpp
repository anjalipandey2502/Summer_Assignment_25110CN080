//number guessing game
#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));//generates random number
    int randomnum=(rand()%200)+1;
    int guess=0,chance=0;
    cout<<"THIS IS THE NUMBER GUESSING GAME.."<<endl;
    cout<<"Please guess the number between 1 to 200..."<<endl;
    do{
        cout<<"Guess..."<<endl;
        cin>>guess;
        chance++;
        if(guess>randomnum) cout<<"Too biggg...";
        else if(guess < randomnum) cout<<"Too lowww...";
        else{
            cout<<"Hurray....you've got this.."<<endl;
            cout<<"Total attempts: "<<chance<<endl;
        }
    }while(guess!=randomnum);
    return 0;
}