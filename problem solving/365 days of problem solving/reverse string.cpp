#include<iostream>
#include<string>
using namespace std;
void Reverse( string& x){
int s=x.length();
for(int i=0;i<s/2;i++){

char y=x[i];
x[i]=x[s-i-1];
x[s-i-1]=y;

}



}



int main(){
string x;
cin>>x;
Reverse(x);
cout<<x;



}