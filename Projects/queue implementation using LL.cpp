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

};

class queue{
    public:
node* front;
node* rear;
queue(){
    front =rear=NULL;

}
bool isEmpty(){
return (front==NULL&&rear==NULL);




}

void enqueue(int val){
    node* newnode=new node;
    newnode->data=val;
if(isEmpty()){
front =rear=newnode;



}
else{
rear->next=newnode;
rear=newnode;



}


}
void display(){
    node* temp=front;
    if(isEmpty())
    cout<<"Queue is empty\n";

    else{

    while(temp!=NULL){
        cout<<temp->data<<" ";
    temp=temp->next;


    }
    cout<<endl;
    }
}

void dequeue(){
if(isEmpty())
cout<<"Queue is empty"<<endl;
else if(rear==front){
delete front;
rear=front=NULL;



}
else{
node* delptr=front;
front=front->next;
delete delptr;



}

}
int frontt(){
    return front->data;
} 
int back(){
    return rear->data;
}




};





int main(){
queue x;
x.enqueue(1);
x.enqueue(2);
x.enqueue(3);
x.display();
cout<<x.frontt()<<endl;
cout<<x.back()<<endl;
cout<<"**************\n";
x.dequeue();
x.display();
cout<<x.frontt()<<endl;
cout<<"**************\n";




}