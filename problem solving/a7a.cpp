#include<iostream>
using namespace std;
class employee{
private:
string name;
string id;
public:
employee(){
name="";
id="";

}
employee(string n,string i){
name=n;
id=i;


}
void setName(string n);
void setId(string i);
string getName();
string getId();


    





};
void employee::setName(string n){
name=n;


}
void employee::setId(string i){
id=i;


}

string employee::getName()
{
    return name;
}

string employee::getId()
{
    return id;
}
class manager :public employee{
private:
int salary;
int bonus;
public:
manager() :employee()
{
salary=0;
bonus=0;


}
manager(string n,string i,int s,int b):employee(n,i){
salary=s;
bonus=b;



}
void setSalary(int s){
    salary=s;
}
void setBonus(int b){
    bonus=b;
    }
    int getSalary(){
        return totalSalary();
    }
    int getBonus(){
        return bonus;


    }
    int totalSalary(){
        return (salary * bonus)/100 + salary;
    }

};
class developer :public employee{
private:
int numberOfHours;
int hourlyRate;
public:
developer() :employee(){
numberOfHours=0;
hourlyRate=0;


}
developer(string n,string i,int h,int r):employee(n,i){
numberOfHours=h;
hourlyRate=r;


}
void setHours(int h){
    numberOfHours=h;
}
void setRate(int r){
    hourlyRate=r;
    }
    int getHours(){
        return numberOfHours;
    }
    int getSalary(){
        return totalSalary();
    }
int totalSalary(){

return hourlyRate*numberOfHours;

}

};
int main(){
employee e1("John","1234");
cout<<e1.getName()<<endl;








}