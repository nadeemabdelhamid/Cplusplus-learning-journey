#include<iostream>
using namespace std;
 class shape{
public:
virtual void area(){
cout<<"area1 ";


}};
class rectangle :public shape{
public:
void area(){
cout<<"area 2";


}




 };
class circle :public shape{
public:
void area(){
cout<<"area 3";


}




 };
int main(){
circle c;
rectangle r;
shape s;
shape *ptr=&c;


ptr->area();



}



    
