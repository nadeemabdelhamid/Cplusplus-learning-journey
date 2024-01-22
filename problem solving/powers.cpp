#include<iostream>
using namespace std;
int main(){
    int num,pow,i=1,p=1;
    cin>>num>>pow;
    if(pow==0) cout<<1<<endl;
    else{
        while(i<=pow){
            p=p*num;
        i++;
        }
    }

cout<<p;
}