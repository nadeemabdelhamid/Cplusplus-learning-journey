#include<iostream>
using namespace std;
void main(){
int x,y,z,largest;
cin>>x>>y>>z;
largest=x;
if(y>=largest)
largest=y;
if(z>=largest)
z=largest;
cout<<"largest among "<<x<<" "<<y<<" "<<z<<" is "<<largest;

}