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

int peak(){
    return top->data;
}




};
stack s;
bool is_balanced(string x){
for(int i=0;i<x.length();i++){
if(x[i]=='('||x[i]=='['||x[i]=='{')
s.push(x[i]);
else if(x[i]==')'||x[i]==']'||x[i]=='}'){
    if(s.is_empty()){
        return false;
     char top = s.peak();
            if ((x[i] == ')' && top == '(') || 
                (x[i] == ']' && top == '[') || 
                (x[i] == '}' && top == '{')) {
                s.pop();  
            } else {
                return false; 
            }

    }
  
    



}




}
return(s.is_empty());
}





int main(){

string x;
cin>>x;
cout<<is_balanced(x);





}