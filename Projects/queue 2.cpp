#include<iostream>
using namespace std;
#define size 50
int arr[size];

int rear=-1,front=-1;
void enqueue(int val){
    if(rear<=size-1){
        if(front == -1&&rear== -1){
            
        arr[++rear]=val;
        front=0;
        
        }
    else{
        arr[++rear]=val;
        
    }
    }
    else
    cout<<"Queue is full"<<endl;

}
void dequeue(){
    if(front!=-1&&rear!=-1){
        int delItem=arr[front];
        front++;

    }
else 
cout<<"Queue is empty"<<endl;
}
int peak(){
    if(front!=-1&&rear!=-1){
        return arr[front];}
        else {
        cout<<"Queue is empty"<<endl;
        return 0;

        }

}
void display(){
    if(front!=-1&&rear!=-1){
        for(int i=front;i<=rear;i++)
        cout<<arr[i]<<" ";

    }
    else
    cout<<"Queue is empty"<<endl;

}
int main(){
enqueue(1);
enqueue(2);
enqueue(3);
display();

cout<<"\n**************\n";
dequeue();
display();
cout<<endl<<peak()<<endl;
cout<<"**************\n";
}
