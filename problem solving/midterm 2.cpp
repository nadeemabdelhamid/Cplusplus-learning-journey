#include<iostream>
using namespace std;
struct student{
int studentId;
int physicsGrade;
int mathsGrade;
int chemistryGrade;



};
double avr(student s[],int n){
    float sum=0;
if(n==1){
    for(int i=0;i<3;i++){

    sum+=s[i].physicsGrade;  
    }
    return sum/3;
}
else if(n==2){
    for(int i=0;i<3;i++){

    sum+=s[i].chemistryGrade;  
    }
    return sum/3;
}
else if(n==3){
    for(int i=0;i<3;i++){

    sum+=s[i].mathsGrade;  
    }
    return sum/3;
}



}
int main(){

student x[3];
for(int i=0;i<3;i++){
cout<<"enter student "<<i+1<<" id: ";
cin>>x[i].studentId;
cout<<"student "<<i+1<<"physics grade: ";
cin>>x[i].physicsGrade;
cout<<"student "<<i+1<<"maths grade: ";
cin>>x[i].mathsGrade;
cout<<"student "<<i+1<<"chemsitry grade: ";
cin>>x[i].chemistryGrade;
cout<<"total grades for student "<<i+1<<" = "<<x[i].physicsGrade+x[i].mathsGrade+x[i].chemistryGrade;
}
cout<<"physics grades="<<avr(x,1)<<endl;
cout<<"chemistry grades="<<avr(x,2)<<endl;
cout<<"maths grades="<<avr(x,3)<<endl;

}