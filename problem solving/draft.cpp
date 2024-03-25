#include <iostream>
using namespace std;
class Rectangle{
    private:
     float length;
     float width;
     public:
     void setLength(float lenth);
     void setWidth(float wid);
     double getLength();
     double getWidth();
     double getArea();
};
void Rectangle::setLength(float len){
    length=len;
}
    void Rectangle::setWidth(float wid){
    width=wid;
}
double Rectangle:: getLength(){
    return length;
}
double Rectangle:: getWidth(){
    return width;
}
double Rectangle:: getArea(){
    return length*width;
}

int main()
{
  Rectangle box;
  float l;
  float w;
  cout<<"Please enter a value for length to calculate the area pf the rectangle\n";
  cin>>l;
   cout<<"Please enter a value for width to calculate the area pf the rectangle\n";
  cin>>w;
  
  box.setLength(l);
  box.setWidth(w);
  
  cout<<"The length is:"<<box.getLength()<<endl;
  cout<<"The width is:"<<box.getWidth()<<endl;
  cout<<"The area is:"<<box.getArea()<<endl;
    
    
    
    

    return 0;
}