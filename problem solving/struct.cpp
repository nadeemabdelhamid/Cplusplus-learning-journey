#include<iostream>
#include<string>
using namespace std;
struct freshman{
    string name; 		// Student's name
 	int idNum; 		// Student ID number
	int creditHours; 	// Credit hours enrolled
 	double gpa; 

};
void getdata(freshman *stu) {
   cout << "Enter the student's name: ";
   cin.sync();
   getline(cin, stu->name);
   cout << "Enter the student's ID number: ";
   cin >> stu->idNum;
   cout << "Enter the number of credit hours :";
   cin>>stu->creditHours;
   cout<<"Enter the GPA: ";
   cin>>stu->gpa;
}
int main(){
freshman student;
getdata(&student);
cout<<"Name: "<<student.name<<endl;
cout<<"ID Number: "<<student.idNum<<endl;
cout<<"Credit Hours: "<<student.creditHours<<endl;
cout<<"GPA: "<<student.gpa<<endl;
return 0;



}