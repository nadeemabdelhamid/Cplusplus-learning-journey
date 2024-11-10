#include<iostream>
using namespace std;
const int max_size=100;
class stack{
    public:
int top;
int arr[max_size];
stack(){
    top=-1;
}
bool is_empty(){
return(top==-1);




}
bool is_full(){
    return(top==max_size-1);
}
void push(int item){
if(is_full()){
    cout<<"Stack is full"<<endl;
}
else{
top++;
arr[top]=item;



}


}
void pop(){
    if(is_empty()){
        cout<<"Stack is empty"<<endl;
}
else{
    top--;
}
}
void get_top(){
     if(is_empty()){
        cout<<"Stack is empty"<<endl;
}
else{
    cout<<arr[top]<<endl;
}
}

void display(){
    if(is_empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";

        }
    }
}

};
int main(){
stack x;
x.push(1);
x.push(2);
x.push(3);
x.display();
cout<<"\n**************\n";
x.get_top();
x.pop();
x.display();
cout<<"\n**************\n";
x.get_top();
}