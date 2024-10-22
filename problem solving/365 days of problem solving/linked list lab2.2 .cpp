#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(){
    data=0;
    next=NULL;
}
node(int x){
    data=x;
    next=NULL;
}






};

class linkedList{
public:
node* head;
linkedList(){
    head=NULL;
}
void printList(){
if(head==NULL)
cout<<"The list is empty!\n";
node* tmp=head;
while(tmp!=NULL){
cout<<tmp->data<<" ";
tmp=tmp->next;

}
cout<<"\n";




}
void insertFirst(int item){
    node* newnode=new node;
newnode->data=item;
if(head==NULL){
newnode->next=NULL;
head=newnode;

}
else{
newnode->next=head;
head=newnode;

}



}
void insert(int item ){
node* newnode=new node;
node* tmp=head;
newnode->data=item;
while(tmp->next!=NULL)
tmp=tmp->next;

tmp->next=newnode;
newnode->next=NULL;

}

int sizeList(){
node* tmp=head;
int count=0;
while(tmp!=NULL){
    count++;
    tmp=tmp->next;
}
return count;



}
void insertIn(int item,int ind){
if(ind<0){
    cout<<"Invalid Index\n";
    return;
}
else if(ind==0)
insertFirst(item);

else if(ind+1>sizeList())
cout<<"Out of bounds\n";

else{
node* newnode=new node;
newnode->data=item;
node* tmp=head;
int i=0;
while(i<ind){
tmp=tmp->next;
i++;
}
newnode->next=tmp->next;
tmp->next=newnode;







}
}

bool isEmpty(){
return (head==NULL);


}
int first(){
    if(isEmpty()){

    cout<<"List is Empty!\n";
    return 0;
    }
return head->data;
}
int last(){
node* tmp=head;
    if(isEmpty()){

    cout<<"List is Empty!\n";
    return 0;
    }
while(tmp->next!=NULL)
tmp=tmp->next;

return tmp->data;


}
int contains(int x){
    node* tmp=head;
    
    int i=0;
    while(i<sizeList()){
    if(tmp->data==x){
    
    return i;

    }

    tmp=tmp->next;
    i++;

    

    }
    return -1;




}

int deleteFirst(){
node *delptr=head;
if(isEmpty()){
    cout<<"List is Empty!\n";
    return 0;
}
else
{
    head=head->next;
}
   
return delptr->data;



}
};



int main(){
    linkedList x;
    x.insertFirst(3);
    x.insertFirst(5);
    x.insert(8);
x.insertIn(5,2);
x.printList();
cout<<x.last()<<endl;
cout<<x.contains(8)<<endl;
cout<<x.first()<<endl;
cout<<x.deleteFirst()<<endl;
cout<<x.first()<<endl;
x.printList();
x.printList();
x.printList();
}
