//Quiz application
#include <bits/stdc++.h>
using namespace std;
struct question{
    string ques;
    string option[4];
    char correct;
};
int main(){
    question quiz[3];
    //question one
    quiz[0].ques="Who is the father of India?";
    quiz[0].option[0]="A.Mahatma Gandhi";
    quiz[0].option[1]="B.Jawaharlal Nehru";
    quiz[0].option[2]="C.Rabindranath Tagore";
    quiz[0].option[3]="D.C.V Raman";
    quiz[0].correct='A';
    //question two
    quiz[1].ques="Who was the first prime minister of India after independence?";
    quiz[1].option[0]="A.Mahatma Gandhi";
    quiz[1].option[1]="B.Jawaharlal Nehru";
    quiz[1].option[2]="C.Rabindranath Tagore";
    quiz[1].option[3]="D.C.V Raman";
    quiz[1].correct='B';
    //question three
    quiz[2].ques="Who is the current prime minister of India?";
    quiz[2].option[0]="A.Rahul Gandhi";
    quiz[2].option[1]="B.Akhilesh Yadav";
    quiz[2].option[2]="C.Priyanka Chopra";
    quiz[2].option[3]="D.Narendra Modi ji";
    quiz[2].correct='D';
    int score=0;
    char userans;
    cout<<"////////////////////////////////////////"<<endl;//prints the interface
    cout<<"          QUIZ TIMEEE                   "<<endl;
    cout<<"////////////////////////////////////////"<<endl;
    cout<<"Answer using option:(A,B,C,D)"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Q"<<(i+1)<<".."<<quiz[i].ques<<endl;
        for(int j=0;j<4;j++){
            cout<<quiz[i].option[j]<<endl;
        }
        cout<<"Your answer:";
        cin>>userans;
        userans=toupper(userans);
        if(userans==quiz[i].correct){
            cout<<"Correct answer....hurrayyyyy.."<<endl;
            score++;
        }else{
            cout<<"Wrong answer..."<<endl;
            cout<<"Correct answer is "<<quiz[i].correct<<endl;
        }
    }
    cout<<"///////////////////////////////////"<<endl;//prints the result
    cout<<"           RESULT TIME             "<<endl;
    cout<<"///////////////////////////////////"<<endl;
    cout<<"Your final score: "<<score<<" /3"<<endl;//prints the score
    return 0;
}