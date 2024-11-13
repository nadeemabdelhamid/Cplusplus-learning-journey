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
class stack{
public:
node* top;
stack(){
    top=NULL;
}
bool is_empty(){
    return (top==NULL);
}
void push(int val){
    node* newnode=new node;
newnode->data=val;
    if (is_empty()){
top=newnode;
newnode->next=NULL;
    }
    else{
newnode->next=top;
top=newnode;




    }

}
void pop(){
if(is_empty()){
    cout<<"Stack is empty"<<endl;
return;
}
else{
    node* temp=top;
    top=top->next;
    delete(temp);
}}
int peak(){
    if(is_empty()){
        cout<<"Stack is empty"<<endl;
return 0;
}
else{
return top->data;
}

}


void display(){
    node* temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

};




int main(){
stack x;
x.push(10);
x.push(20);
x.push(30);
x.push(40);
x.display();
x.pop();
x.display();
}