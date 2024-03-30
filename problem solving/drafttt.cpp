#include <iostream>
#include <string>
using namespace std;
struct Employee{
  string EmployeeName;
  int Salary;
  int Age;
  int NumberofYearsInTheCompany;
 
};
int main()
{
 Employee d[3];
  
 for(int i=0;i<3;i++ ){
     cout<<"Enter the employee data\n";
     cout<<"Employee Name:\n";
     cin.sync();
     getline(cin,d[i].EmployeeName);
     cout<<"Employee Salary:\n";
     cin>>d[i].Salary;
     cout<<"Employee Age:\n";
     cin>>d[i].Age;
     cout<<"Number of years that the employee worked in the company:\n ";
     cin>>d[i].NumberofYearsInTheCompany;
    
 }
 float sum=0;
 
for(int i=0;i<3;i++){
    sum+=d[i].Age;
}
 cout<<"Average Age of the employee:"<<sum/3<<'\n';
 for(int i=0;i<3;i++){
     if(d[i].NumberofYearsInTheCompany>5){
         cout<<d[i].EmployeeName<<endl;
     }
 }

}
