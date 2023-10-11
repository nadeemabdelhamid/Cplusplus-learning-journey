#include<iostream>
using namespace std;

int main() {
/*
  1982 => "My Birth Day"
  1989 => "My First Work"
  1995 => "Windows 95"
  2000 => "Windows Millennium"
  2002 => "Created My vBulletin Forum"
  Any Other Year => "No Events in This Year"
*/
int year;
cout<<"enter a random year\n";
cin>>year;
switch(year){
case 1982: 
cout<<"my birth day";
break;
case  1989 :
cout<<"my first work";
break;
case   1995: 
cout<<"\nwindows 95\n"; break;
case    2000:
cout<<"\nwindows millennium\n"; break;
case 2002:
cout<<"Created My vBulletin Forum" ;
break;
default: 
cout<<"no events this year";

}




}