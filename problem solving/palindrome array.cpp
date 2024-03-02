#include<iostream>
using namespace std;
int main(){
int num,swap;
  int cnt=0;
bool check=false;
cin>>num;
int orig[num];
int rev[num];
for(int i=0;i<num;i++)
cin>>orig[i];
for(int i=0 ;i<num;i++)
rev[i]=orig[i];
for(int i=0;i<num/2;i++){//reverse the array
swap=rev[i];
rev[i]=rev[num-i-1];
rev[num-i-1]=swap;

}
for(int i=0;i<num;i++){
  
if(orig[i]==rev[i])
cnt++;

if(cnt==num)
check=true;


}

if(check)
    cout<<"YES\n";
    else
    cout<<"NO\n";






}