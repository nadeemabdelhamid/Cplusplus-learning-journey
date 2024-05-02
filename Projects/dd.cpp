#include <iostream>
#include <string>
using namespace std;


class Employee
{
private:
	int id;
	string name;
	int age;
	string address;
	string role;
	int salary;
    
public:
    
    Employee();

    
    int getId()  ;
    string getName() ;
    int getAge();
    string getAddress() ;
   string getRole() ;
    double getSalary() ;

    
    void setName(string n){name = n;}
    void setAge(int a){age = a;}
    void setID(int i ){id=i;}
    void setAddress(string add){address = add;}
    void setRole(string r){role = r;}
    void setSalary(double sal){salary = sal;}
};

Employee x[20];
int total = 0;

class Database:public Employee
{

public:
    Database();
    void addEmployee() {
	int id;
	string name;
	int age;
	string address;
	string role;
	int salary;
	cout << "Enter Employee ID" << endl;
	cin >> id;
	x[total].setID(id);
	cout << "Enter Employee Name" << endl;
	cin >> name;
	x[total].setName(name);
	cout << "Enter Employee Age" << endl;
	cin >> age;
	x[total].setAge(age);
	cout << "Enter Employee Address" << endl;
	cin >> address;
	x[total].setAddress(address);
	cout << "Enter Employee Role" << endl;
	cin >> role;
	x[total].setRole(role);
	cout << "Enter Employee Salary" << endl;
	cin >> salary;
	x[total].setSalary(salary);

	total = total + 1;

	cout << "Employee inserted successfully " << endl;
}
void findEmployeeById() {
	int id;
	cout << "Enter Employee ID to search for: ";
	cin >> id;

	for (size_t i = 0; i < total; i++) {
		if (x[i].getId() == id) {
			cout << "Employee Details:" << endl;
			cout << "ID: " << x[i].getId() << endl;
			cout << "Name: " << x[i].getName() << endl;
			cout << "Age: " << x[i].getAge() << endl;
			cout << "Role: " << x[i].getRole() << endl;
			cout << "Salary: " << x[i].getSalary() << endl;
		}
	}

	cout << "Employee with ID " << id << " not found." << endl;
}
void editEmployee() {
	int id;
	cout << "Enter Employee ID to search for" << endl;
	cin >> id;
	for (size_t i = 0; i < total; i++)
	{
		if (x[i].getId() == id) {
			int newId;
			string newName;
			int newAge;
			string newAddress;
			string newRole;
			int newSalary;

			cout << "Enter Employee new ID" << endl;
			cin >> newId;
			x[i].setID(newId);
			cout << "Enter Employee New Name" << endl;
			cin >> newName;
			x[i].setName(newName);
			cout << "Enter Employee New Age" << endl;
			cin >> newAge;
			x[i].setAge(newAge);
			cout << "Enter Employee New Address" << endl;
			cin >> newAddress;
			x[i].setAddress(newAddress);
			cout << "Enter Employee New Role" << endl;
			cin >> newRole;
			x[i].setRole(newRole);
			cout << "Enter Employee New Salary" << endl;
			cin >> newSalary;
			x[i].setSalary(newSalary);

			cout << "Employee with ID " << id << " successfully updated." << endl;
		}
		cout << "Employee with ID " << id << " not found." << endl;

	}
}
void deleteEmployee() {
	int id;
	cout << "Enter Employee ID to delete: ";
	cin >> id;

	for (size_t i = 0; i < total; i++) { 
		if (x[i].getId() == id) {
			for (size_t j = i; j < total - 1; j++) {
				x[j] = x[j + 1];
			}
			total--;
			cout << "Employee with ID " << id << " has been deleted." << endl;
			return;
		}
	}

	cout << "Employee with ID " << id << " not found." << endl;
}
void findEmployeeByHighWage() {

	for (size_t i = 0; i < total; i++)
	{
		if (x[i].getSalary() > 20000)
		{
			cout << "Employee Details:" << endl;
			cout << "ID: " << x[i].getId() << endl;
			cout << "Name: " << x[i].getName() << endl;
			cout << "Age: " << x[i].getAge() << endl;
			cout << "Role: " << x[i].getRole() << endl;
			cout << "Salary: " << x[i].getSalary() << endl;
		}
	}
}
};

class Menu {
private:
    Database database;

public:
    void displayMenu() {
        cout << "" << endl;
        cout << "1.Add Employee\n" << endl;
        cout << "2.Edit Employee\n" << endl;
        cout << "3.Find Employee by ID\n" << endl;
        cout << "4.Delete Employee\n" << endl;
        cout << "5.Find Employee by High Wage\n" << endl;
        cout << "6.Exit" << endl;
        cout << "" << endl;
    };

    void selectOption() {
        int option;
        cout << "Choose an option: ";
        cin >> option;

        switch (option) {
            case 1:
                database.addEmployee();
                break;
            case 2:
                database.editEmployee();
                break;
            case 3:
                database.findEmployeeById();
                break;
            case 4:
                database.deleteEmployee();
                break;
            case 5:
                database.findEmployeeByHighWage();
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    }

    void executeOption() {
        while (true) {
            displayMenu();
            selectOption();
            int continueOption;
            cout << "Do you want to continue? (1: Yes, 0: No): ";
            cin >> continueOption;
            if (continueOption == 0) {
                break;
            }
        }
    }

    void exitSystem() {
        cout << "Exiting the system" << endl;
        exit(0);
    }
};

int main() {
    Menu menu;
    menu.executeOption();
    return 0;
}