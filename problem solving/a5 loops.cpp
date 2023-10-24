#include<iostream>
using namespace std;
int main(){

    cout<<"==program in to check whether a number is prime or not.==\n";
    int num,i=1,ctr=0;
    cout<<"enter your number";
    cin>>num;
  while(i<=num){
if(num%i==0)
ctr++;
    i++;
  }
  if(ctr==2){
    cout<<num<<"is a prime number.";}
  else{
    cout<<num<<"isnot a prime number.";}
  }
