#include<iostream>
using namespace std;
void print(int x,char n){
    if (x==0)
    return;
for(int i=0;i<x;i++)
cout<<n;
cout<<endl;
print(x-1,n);



}
int main(){
int x;
char n;
cout<<"enter no of levels & char needed: ";
cin>>x>>n;
print(x,n);



}