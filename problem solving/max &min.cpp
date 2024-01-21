
#include<iostream>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
int min=x,max=x;

if(x>max)
max=x;
if(y>max)
max=y;
if(z>max)
max=z;
if(x<min)
min=x;
if(y<min)
min=y;
if(z<min)
min=z;

cout<<min<<" "<<max;

}