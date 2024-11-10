#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

};
class stack{
    public:
node* top;
stack(){
    top = NULL;
}
bool is_empty(){
    return top == NULL;
}
void push(int val){
    node* newnode = new node();
if(is_empty()){
    newnode->data=val;
    top=newnode;
    newnode->next=NULL;
}
else{
newnode->data=val;
newnode->next=top;
top=newnode;


}





}
void pop(){
node* delptr=top;
top=top->next;
delete delptr;




}

void display(){
node* tmp=top;
while(tmp!=NULL){
    cout<<tmp->data<<" ";
    tmp=tmp->next;
}

}

void peak(){
cout<<top->data<<endl;

}




};





int main(){
stack x;
x.push(10);
x.push(20);
x.push(30);
x.display();
cout<<"***********\n";
x.pop();
x.display();
cout<<"***********\n";
x.peak();





}