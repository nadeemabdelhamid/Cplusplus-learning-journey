#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class contact  {
private:
string name;
string address;
string email;
int phoneNum;
public:
void setname(string N){name=N;}
void setaddress(string A){address=A;}
void setemail(string E){email=E;}
void setphoneNum(int P){phoneNum=P;}
string getname(){return name;}
string getaddress(){return address;}
string getemail(){return email;}
int getphoneNum(){return phoneNum;}
};
contact x[100];
int Num=0;
class fileManager{

public:
static void WriteToFile(){
ofstream outFile ("contacts.txt",ios::out);
string name,address,phoneNumber;
outFile<<"===========Data list===========\n";
for(int i=0;i<Num;i++){
 outFile <<"["<<i+1<<"]"<<"Name:"<< x[i].getname() << "," <<"Phone num: "<< x[i].getphoneNum() << ", "
                 <<"Address: "<< x[i].getaddress() << ", " <<"Email: "<< x[i].getemail() << endl;
        }
        outFile.close();







}
//read from file contentt





  
};
class contact_manager  :public contact, public fileManager {
    
    public:
void addContact(){
    int Phonenum;
    string name;
    string address;
    string email;

cout<<"enter data for contact "<<Num+1<<endl;
cout<<"enter name :";
cin>>name;
x[Num].setname(name);
cout<<"\nEnter address";
cin>>address;
x[Num].setaddress(address);
cout<<"\nenter email";
cin>>email;
x[Num].setemail(email);
cout<<"\nenter phone number";
cin>>Phonenum;
x[Num].setphoneNum(Phonenum);
Num++;
fileManager::WriteToFile();




}
void listAllContact(){
for(int i=0;i<Num;i++){
cout<<"\n<==contact "<<i+1<<" data ==> \n";
cout<<"==========================";

cout<<"\nName : "<<x[i].getname();
cout<<"\nPhone : "<<x[i].getphoneNum();
cout<<"\nAddress : "<<x[i].getaddress();
cout<<"\nEmail : "<<x[i].getemail()<<endl;
cout<<"==========================\n";



}}
void SearchForContact()
{
    int n;
cout<<"[1] search by name\n";
cout<<"[2] serach by phone number";
cin>>n;
    

    while(n!=1&&n!=2){
        cout<<"try again\n";
        cout<<"[1] search by name\n";
cout<<"[2] serach by phone number";
cin>>n;
    }
if(n==1)
searchByName();
else if(n==2)
searchByNum();







}
void searchByName(){
    string name;
    bool found=false;
    
cout<<"enter name to search for :";
cin>>name;
for(int i=0;i<Num;i++){
if(name==x[i].getname()){
cout<<"\ndata for "<<name<<"==>";
cout<<"\nPhone : "<<x[i].getphoneNum();
cout<<"\nAddress : "<<x[i].getaddress();
cout<<"\nEmail : "<<x[i].getemail()<<endl;
found=true;

break;
}



}
if(!found)
cout<<"name not found .\n";


}
void searchByNum(){
    int number;
    bool found=false;
cout<<"Enter number to search for : ";
cin>>number;
for(int i=0;i<Num;i++){
if(number==x[i].getphoneNum()){
cout<<"\ndata for "<<number<<"==>";
cout<<"\nname : "<<x[i].getname();
cout<<"\nAddress : "<<x[i].getaddress();
cout<<"\nEmail : "<<x[i].getemail()<<endl;
found=true;
break;

}


}
if(!found)
cout<<"num not found .\n";

}
};
void editAContact() {
    string oldname, Newname, address, email;
    int Phonenum;
    bool found = false;

    cout << "Enter the name of the contact to edit: ";
    cin >> oldname;

    for (int i = 0; i < Num; i++) {
        if (oldname == x[i].getname()) {
            found = true;
            cout << "Update data for " << oldname << ":\n";
            cout << "Enter new name: ";
            cin >> Newname;
            x[i].setname(Newname);
            cout << "Enter new address: ";
            cin >> address;
            x[i].setaddress(address);
            cout << "Enter new email: ";
            cin >> email;
            x[i].setemail(email);
            cout << "Enter new phone number: ";
            cin >> Phonenum;
            x[i].setphoneNum(Phonenum);
            cout << "Contact updated successfully.\n";
            break;
        }

    }

    if (!found) {
        cout << "Contact with name " << oldname << " not found.\n";
    }
 fileManager::WriteToFile(); 
}

void DeleteAContact() {
    string name;
    cout << "Enter the name of the contact to delete: ";
    cin >> name;
    bool found = false;

    for (int i = 0; i < Num; i++) {
        if (name == x[i].getname()) {
            found = true;
            
            for (int j = i; j < Num - 1; j++) {
                x[j] = x[j + 1];
            }
           
            Num--;
            cout << "Contact " << name << " deleted successfully.\n";
            break;
        }
    }
 fileManager::WriteToFile(); 

    if (!found) {
        cout << "Contact with name " << name << " not found.\n";
    }
 
};



class ui :public contact_manager{
private:
int choise;
public:
void display_menu(){


cout<<"MAIN MENU\n";
cout<<"=====================\n";
cout<<"[1] Add a new contact: \n";
cout<<"[2] List all contacts: \n";
cout<<"[3] Search for contact: \n";
cout<<"[4] Edit a contact: \n";
cout<<"[5] Delete a contact: \n";
cout<<"[0] Exit\n";
cout<<"=====================\n";
    






}
void getUserInput(){
    do{
    display_menu();
cout<<"Enter the choise: ";
cin>>choise;
choises(choise);
    }while(choise!=0);



}
void choises(int ch){
switch(ch){
case 1:addContact();
break;
case 2:listAllContact();
break;
case 3:SearchForContact();
break;
case 4:editAContact();
break;
case 5:DeleteAContact();
break;
default:cout<<"enter your choise from(0-5)\n";
break;




}



}

};




int main(){
ui x;
x.getUserInput();


}
        



