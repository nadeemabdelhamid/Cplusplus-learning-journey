#include <iostream> 
using namespace std;
#define size 5 
int queue[size], front = -1, rear = -1;
void enqueue(int value) 
{ if (rear != size - 1) { if (front == -1 && rear == -1) {  front++; rear++; queue[rear] = value; } else { rear++; queue[rear] = value; } } else { cout << " queue is full";
} } 
void dequeue() { if (front != -1 && rear != -1 && front <= rear) {
front++;
} else { cout << " queue is empty"; }
} 
void display() {
if (front != -1 && rear != -1 && front <= rear) { for (int i = front; i <= rear; i++) { cout << queue[i] << endl; } } else { cout << " queue is empty"; } }
int peek() 

{ if (front != -1 && rear != -1 && front <= rear) { return queue[front]; } else { cout << " queue is empty "; return -1; }
}
int main()
 {
     enqueue(12);
      enqueue(11);
       enqueue(10);
        
display();
cout << " ================================" << endl; 
dequeue(); 
display();
 cout << " ================================" << endl; 
 cout << peek();
}