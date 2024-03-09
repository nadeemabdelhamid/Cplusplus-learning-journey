#include <iostream>
#include<string>
using namespace std;

int main() {
  
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

string x;
cin>>x;
for(int i=0;i<x.length( );i++){
if(x[i]==',')
x[i]=' ';
 else if(int(x[i])>=65&&int(x[i])<=90){
 x[i]+=32;

 }
 else if(int(x[i])>=97&&int(x[i])<=122){
 x[i]-=32;


 }





}


cout<<x;

  
}