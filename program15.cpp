//program15--wap to check armstrong number...example 153
#include <iostream>
using namespace std;
int main(){
    int n,ld,cnt,p,q,num=1,ans=0,count=0;
    cout<<"Enter the number to check: ";
    cin>>n;
    q=n;
    p=n;
    while(n>0){
        n/=10;
        count++;
    }
    cnt=count;
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
    return 0;
}