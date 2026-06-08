//function for armstrong
#include <iostream>
using namespace std;
void armstrong(int n){
    int ld,num=1,ans=0,count=0;
    int q=n;
    int p=n;
    while(n>0){
        n/=10;
        count++;
    }
    int cnt=count;
    while(q>0){
        ld=q%10;
        while(cnt>0){
            num*=ld;
            cnt--;
        }
        ans+=num;
        cnt=count;
        num=1;
        q/=10;
    }  
    if(ans==p){
        cout<<"Armstrong number..";
    }else{
        cout<<"It is not an armstrong number..";
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    armstrong(n);
    return 0;
}