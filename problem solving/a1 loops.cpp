#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    string name;
    int ID;
    string gender;
    public:
    void setEmployeeData(){
        cout<<"Please enter the name:\n";
        cin.ignore();
        getline(cin,name);
        cout<<"Please enter your ID:\n";
        cin>>ID;
        cout<<"Please enter your gender:\n";
        cin.ignore();
        getline(cin,gender);
    }
    void getEmployeeData(){
        cout<<"Employee name is:"<<name<<endl;
        cout<<"Employee ID is:"<<ID<<endl;
        cout<<"Employee gender is:"<<gender<<endl;
    }
    
};
class Manager:public Employee{
    private:
    string title;
    int salary;
    int bonus;
    public:
   void setManagerData(){
        setEmployeeData();
        cout<<"Please enter a title\n";
        cin.ignore();
        getline(cin,title);
        cout<<"please enter a salary\n";
        cin>>salary;
        cout<<"Please enter a bonus\n";
        cin>>bonus;
    }
    float calculateTotalSalary(){
        float total;
        total=(salary*bonus)/100+salary;
        return total;
    }
    void getManagerData(){
        getEmployeeData();
        cout<<"Manager title is:"<<title<<endl;
        cout<<"Manager salary is:"<<salary<<endl;
        cout<<"Manager bonus is:"<<bonus<<endl;
        cout<<"Total salary is:"<<calculateTotalSalary()<<endl;
    }
};
class Developer:public Employee{
    private:
    int numOfworkingHours;
    int salaryPerHour;
    public:
    void setDeveloperData(){
        setEmployeeData();
        cout<<"Please enter number of working hours\n";
        cin>>numOfworkingHours;
         cout<<"Please enter number of salary per hour\n";
         cin>>salaryPerHour;
    }
    float calculateTotalSalary(){
        float total;
        total=salaryPerHour* numOfworkingHours;
        return total;
    }
    void GetDeveloperData(){
         getEmployeeData();
         cout<<"Number of working hours is:"<<numOfworkingHours<<endl;
          cout<<"Number of salary per hour is:"<<salaryPerHour<<endl;
          cout<<"Total salary is:"<<calculateTotalSalary()<<endl;
    }
};

int main()
{
    Manager M;
    Developer D;
    
    M.setManagerData();
    M.getManagerData();
    D.setDeveloperData();
    D.GetDeveloperData();                                                                                                        

    return 0;
}