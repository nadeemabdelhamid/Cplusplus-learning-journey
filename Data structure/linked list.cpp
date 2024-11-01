#include <iostream>
using namespace std;
struct node {
 int data;
 node* next;
};
node* head = NULL;
void insertNode(int value) {
 node* newNode = new node;
 newNode->data = value;
 node* last;
 if (head == NULL) {
 head = newNode;
 newNode->next = NULL;
 }
 else {
 last = head;
 while (last->next != NULL) {
 last = last->next;
 }
 last->next = newNode;
 newNode->next = NULL;
 }
}
void display() {
 node* current;
 if (head == NULL) {
 cout << "EMPTY\n";
 }
 else {
 current = head;
 while (current != NULL) {
 cout << current->data<<endl;
 current = current->next;
 }
 }
}
 void deleteMiddle(int value) {
 node* current, *previous;
 current = head;
 previous = head;
 
 if (current->data == value) {
 head = current->next;
 free(current);
 return;
 }
 while (current->data != value) {
 previous = current;
 current = current->next;
 }
 previous->next = current->next;
 free(current);
}
void deleteEnd(){
  node* current, *previous;
 current = head;
 previous = head;
if (head == NULL)
{
cout << "The LINKED LIST is EMPTY" << endl;
}
if (current->next == NULL) {
delete(current);
head = NULL;
}
else {
while (current->next != NULL)
{
previous = current;
current = current->next;
}
previous->next = NULL;
delete(current);
}
}
int main() {
    insertNode(5);
 insertNode(9);
 insertNode(2);
 insertNode(6);
 insertNode(8);
 display();
 cout << "*" << endl;
 deleteMiddle(2);
     display();
    cout << "*" << endl;
    deleteEnd();
    display();
return 0;
}