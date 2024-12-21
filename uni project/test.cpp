#include<iostream>
#include<string>
#include<math.h>
using namespace std;
struct User{
string name;
int accountNumber;
double balance;
User* next;
User(){
    name = " ";
    accountNumber = rand() % (10000 - 1000 + 1) + 1000;
    balance = 0;
next=NULL;


}



};

class bankAccount{
    protected:
    User* head;

bankAccount(){
    head = NULL;
}
public:

int getId() {
    if (head != NULL) {
        return head->accountNumber;
    }
    return -1; 
}

void add(string name,double inital){
User* newUser=new User;

newUser->name=name;
newUser->balance=inital;
if(head==NULL){
newUser->next=NULL;
head=newUser; 


}
else{
    newUser->next=head;
    head=newUser;
    //inserting at beggining






}

}//end of addAccount function

User* searchById(int key){
    User* tmp = head;
    while (tmp != NULL) {
if(tmp->accountNumber==key)
return tmp;
tmp=tmp->next;





}
return NULL;


}//end of search function


//sorting function


void sortById() {
        if (head == NULL || head->next == NULL) {
            return; 
        }

        User* current = head;
        User* index = NULL;
        int tempAccNum;
        string tempName;
        double tempBalance;

        while (current != NULL) {
            index = current->next;
            while (index != NULL) {
                if (current->accountNumber > index->accountNumber) {
                   
                    tempAccNum = current->accountNumber;
                    tempName = current->name;
                    tempBalance = current->balance;

                    current->accountNumber = index->accountNumber;
                    current->name = index->name;
                    current->balance = index->balance;

                    index->accountNumber = tempAccNum;
                    index->name = tempName;
                    index->balance = tempBalance;
                }
                index = index->next;
            }
            current = current->next;
        }   
    }//end of sort function








void displayAccounts(){
    User* tmp = head;
    sortById();
    if(head==NULL){
    cout<<"No accounts found"<<endl;
    return;

    }

    while (tmp != NULL) {
        cout<<" - Account Number: "<<tmp->accountNumber<<" || ";
        cout<<"Account Name: "<<tmp->name<<" || ";
        cout<<"Balance: $"<<tmp->balance<<" || ";
        
        cout<<endl;
        tmp=tmp->next;
        


}

}//end of display function

void deleteNode(int key){
User* del=searchById(key);
if(del==NULL)
cout<<"Account not found"<<endl;
else{
    User* priv;
    if(del==head)
    head=head->next;
    
    else{
        priv=head;
        while(priv->next!=del)
        priv=priv->next;

        priv->next=del->next;
    
        }
        delete del;






}
}// end of delete function






};


class mainFunctions :public bankAccount{
public:
void addAccount(){

    string name;
    double balance ;
    
    cout<<"Enter account name"<<endl;
    cin.ignore();
    getline(cin,name);
    do{

cout<<"Enter account balance"<<endl;
cin>>balance;
if(balance<0)
cout<<"Invalid balance"<<endl;
else
break;
}while(1);
    

    add(name,balance);
    cout<<"Account added successfully "<<endl; 
    cout<<"Your id is : "<< getId()<<endl;

    
}

void deposit(){
    int id;
    double amount ;
    
    cout<<"Enter account id"<<endl;
    cin>>id;
       do{

cout<<"Enter amount to deposit"<<endl;
    cin>>amount;
if(amount<0)
cout<<"Invalid balance"<<endl;
else
break;
}while(1);
    

    User* account=searchById(id);
    if(account!=NULL)
    {
        account->balance+=amount;
        cout<<"Deposit successful"<<endl;

}
else
cout<<"Account not found"<<endl;



}
void withdraw(){
    int id;
    double amount ;
    cout<<"Enter account id"<<endl;
    cin>>id;
    cout<<"Enter amount to withdraw"<<endl;
    cin>>amount;

    User* account=searchById(id);
    if(account!=NULL)
    {
        if(account->balance>=amount)
        {
            account->balance-=amount;
            cout<<"Withdrawal successful"<<endl;
            }
            else
            cout<<"Insufficient balance"<<endl;
            }
            else
            cout<<"Account not found"<<endl;

}
void chechBalance(){
    int id;
    cout<<"Enter account id"<<endl;
    cin>>id;

    User* account=searchById(id);
    if(account!=NULL)
    {
        cout<<"Account balance is "<<account->balance<<endl;

}
    else
    cout<<"Account not found"<<endl;

}
void deleteAccounts(){
    int id;
    cout<<"Enter account id"<<endl;
    cin>>id;
    deleteNode(id);
    cout<<"Account deleted"<<endl;
}

};



int main() {
mainFunctions x;
    int choise;
cout<<"Welcome to the MSN banking system😍"<<endl;
cout<<"--------------------------------\n";
do{
    cout<<"Choose an option"<<endl;
    cout<<"1. Create account"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Check balance"<<endl;
    cout<<"5.Display accounts"<<endl;
cout<<"6.Delete account"<<endl;
    cout<<"7. Exit"<<endl;
cout<<"--------------------------------\n";

    cin>>choise;
    switch(choise){
case 1:{
x.addAccount();
break;

}
case 2:{
x.deposit();
break;

}
case 3:{
x.withdraw();
break;

}
case 4:{
x.chechBalance();
break;

}
case 5:{
     x.displayAccounts();
    break;
}
case 6: {
    x.deleteAccounts();
    break;
   
}
case 7:{
    cout<<"Thank you for using MSN banking system!"<<endl;
    return 0;
}
default:{

cout<<"Invalid option"<<endl;
break;
}



    }





}while(choise!=7);






}