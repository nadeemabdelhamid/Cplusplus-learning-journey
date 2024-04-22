#include<iostream>
#include<string>
using namespace std;
int choise;
 int total_books=0;
 int users=0;
 struct user{
string  name;
int id;
int bookid[10]={0};
int count=0;
 };
struct book{
int id;
string name;
int quantity;
int borrow=0;

};
book dataa[1000];

user infoo[1000];



void searchB(){
cout<<"enter book name prefix: ";
string s;
bool  found = false;
cin>>s; 
for(int i=0;i<total_books;i++){
if(dataa[i].name.find(s)==0){
cout<<dataa[i].name<<endl;
found = true;

}
}
 if(!found)
cout<<"not found "<<endl;
}
void add_book(){
cout<<"enter book info: id & name & quantity: ";
cin>>dataa[total_books].id>>dataa[total_books].name>>dataa[total_books].quantity;
total_books++;

}
void sortByid(){
    book tmp;
for(int i=0;i<total_books;i++){

int minIndex=i;
for(int j=i+1;j<total_books;j++)
    if(dataa[j].id<dataa[minIndex].id)
        minIndex=j;
        
    tmp=dataa[i];
    dataa[i]=dataa[minIndex];
    dataa[minIndex]=tmp;



}
for(int i=0;i<total_books;i++)
cout<<"id"<<" = "<<dataa[i].id<<" name = "<<dataa[i].name<<" qty = "<<dataa[i].quantity<<" total borrowed = "<<dataa[i].borrow<<endl;


}
void sort_by_name(){
    book tmp;
for(int i=0;i<total_books;i++){
int minIndex=i;
for(int j=i+1;j<total_books;j++)
if(dataa[j].name[0]<dataa[minIndex].name[0])
minIndex=j;
tmp=dataa[i];
dataa[i]=dataa[minIndex];
dataa[minIndex]=tmp;
}for(int i=0;i<total_books;i++)
cout<<"name = "<<dataa[i].name<<"id = "<<dataa[i].id<<"qty = "<<dataa[i].quantity<<endl;

}
void addUser(){
cout<<"enter user name & natid : ";
cin>>infoo[users].name>>infoo[users].id;
users++;


}

void borrow() {
    cout << "Enter user name & book name: ";
    string userName, bookName;
    int bookID = -1;
    cin >> userName >> bookName;

    
    for (int i = 0; i < total_books; i++) {
        if (dataa[i].name == bookName) {
            dataa[i].borrow++;
            bookID = dataa[i].id;
            break; 
        }
    }

    
    if (bookID != -1) {
        for (int j = 0; j < users; j++) {
            if (infoo[j].name == userName) {
                infoo[j].bookid[infoo[j].count++] = bookID;
                break; 
            }
        }
    } else {
        cout << "Book not found!\n";
    }
}
void returnn(){
cout<<"enter user name & book name : ";
string c,d;
cin>>c>>d;
for(int i=0;i<total_books;i++){
if(dataa[i].name==c)
dataa[i].borrow--;


}

}

void printt(){
for(int i=0;i<users;i++){
cout<<"user name = "<<infoo[i].name<<" id = "<<infoo[i].id;
if(infoo[i].count!=0){
    cout<<" books ids = ";
for(int j=0;j<infoo[i].count;j++)
cout<<infoo[i].bookid[j]<<' ';
cout<<endl;

}
else 
cout<<" no books borrowed"<<endl;
}

}
void printt2(){
cout<<"enter book name to search : ";
string name;
int id=-1;
cin>>name;
for(int i=0;i<total_books;i++)
if(name==infoo[i].name){
id=infoo[i].id;
break;


}
for(int  j=0;j<users;j++)
for(int i=0;i<infoo[j].count;i++)
if(id==infoo[j].bookid[i]){
cout<<" user name = "<<infoo[j].name<<endl;

}}
void choises(int c){
switch  (c) {
case 1:add_book();break;
case 2:searchB();break;
case 3:printt2();break;
case 4:sortByid();break;
case 5:sort_by_name();break;
case 6:addUser();break;
case 7:borrow();break;
case 8:returnn();break;
case 9:printt();break;



}
}

void menu(){
do{
cout<<"======library menu:-======\n\n";
cout<<"1) add book\n";
cout<<"2) search books by prefix\n";
cout<<"3) print who borrowed a book by name\n";
cout<<"4) print library by id\n";
cout<<"5) print library by name\n";
cout<<"6) add user\n";
cout<<"7) user borrow book\n";
cout<<"8) user return book\n";
cout<<"9) print users\n";
cout<<"10) exit\n";
cout<<"\nenter your menu choise [1 - 10] : ";
cin>>choise;
if(choise>=1&&choise<=9)
choises(choise);
else if(choise!=10)
cout<<"enter another number";



}while(choise!=10);



}
int main(){
     
    menu();
     
}