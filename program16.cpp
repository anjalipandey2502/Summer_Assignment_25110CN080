//program16- -wap to print armstrong number in a range
#include <iostream>
using namespace std;
int main(){
    int n,num,a,b,count,cnt,ld,q=0,ans=1;
    cout<<"Enter range of number: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        n=i;
        ld=1;
        q=0;
        count=0;
        num=i;
        while(num>0){
            num/=10;
            count++;
        }
        while(n>0){
            cnt=count;
            ld=n%10;
            while(cnt>0){
                ans*=ld;
                cnt--;
            }
            n=n/10;
            q=q+ans;
            ans=1;
        }
        if(q==i){
            cout<<i<<"\t";
        }
    }
    return 0;
}
