#include<iostream>
using namespace std;
struct node{
int data;
node* next;
};
node* head=NULL;
void insert(int item){
node* newnode=new node;
node* tmp=head;
newnode->data=item;
if(head==NULL){
head=newnode;
newnode->next=NULL;
return;

}
else{
while(tmp->next!=NULL)
tmp=tmp->next;


tmp->next=newnode;
newnode->next=NULL;
}





}

void display(){
node* tmp=head;
if(head==NULL){
    cout<<"List is empty"<<endl;
    return;
}
while(tmp!=NULL){
cout<<tmp->data<<endl;
tmp=tmp->next;



}



}

void delete_end(){
node* current=head;
node* previous = head;
if(head==NULL){
    cout<<"List is empty"<<endl;
    return;
}
if(head->next==NULL){
    head=NULL;
    delete (current);
    return;
}
else{
    while(current->next!=NULL)
{
    previous = current;
    current = current->next;

}
previous->next=NULL;
delete(current);

}




}
int count(){
    node* tmp=head;
    int count=0;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;}
        return count;
}
void delete_mid(){
int i=0;
node* nextt=head;
node* previous = NULL;
node* delptr=head;
if(head==NULL){
    cout<<"List is empty"<<endl;
}
if(count()==1){
    head=NULL;
    delete(delptr);
    return;
}
while(i!=count()/2){
previous=delptr;
delptr=delptr->next;
nextt=delptr->next;
i++;
}
previous->next=nextt;
delete(delptr);



}
int main(){
 insert(5);
 insert(9);
 insert(2);
 insert(6);
 
 
display();
cout<<"************\n";
delete_mid();
display();
cout<<"************\n";
delete_end();
display();

 


}