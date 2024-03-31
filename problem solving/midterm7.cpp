#include<iostream>
#include<math.h>
using namespace std;
class complex{
private:
int real,imaginary;
public:
complex(){
    real=0;imaginary=0;
}
complex(int r,int i){
r=real;i=imaginary;


}
void mag(){

cout<<sqrt(real*real+imaginary*imaginary)<<endl;

}
};
int main(){
complex x(3,4);
x.mag();


}