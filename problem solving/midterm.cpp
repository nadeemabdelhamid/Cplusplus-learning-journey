#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
struct employee{

    string name;
    double salary;
    int age;
    int years;
    };

int main()
{
employee x[3];
double agesum=0.0;
for(int i=0;i<3;i++){
cout<<"enter name  of the employee "<<i+1<<endl;
cin.sync();
getline(cin,x[i].name);
cout<<"enter salary of employee "<<i+1<<endl;
cin>>x[i].salary;
cout<<"enter age of employee "<<i+1<<endl;
cin>>x[i].age;
cout<<"enter number of years of employee "<<i+1<<endl;
cin>>x[i].years;


}
    for(int i=0;i<3;i++){
agesum+=x[i].age;


    }
    cout<<"average = "<<agesum/3.0<<'\n';
   for(int i=0;i<3;i++){
if(x[i].years>5)
cout<<x[i].name;


   }
   }

   
   

