/*CREATED BY
1) NEHMYA BIRUK
ID(04601/14) --- SECTION-3

2) DAGMAWI TEFERI
ID(04606/14) --- SECTION-3
*/
#include <iostream>
using namespace std;
// define structure for the nodes in the queue
struct Node {
int data;
Node* next;
};
//define pointers for the front and rear nodes of the queue
Node* front = 0;
Node* rear = 0;
//function to add an element to the rear of the queue
void enQueue(int value) {
Node* temp = new Node;
temp->data = value;
if (front == 0) {
 front = temp;
}
 else {
    rear->next = temp;
 }
rear = temp;
rear->next = front;
 }
 //function to remove an element from the front of the queue
void deQueue() {
 if (front == 0) {
cout << "Queue is empty" << endl;
return;
}
if (front == rear) {
delete front;
front = 0;
rear = 0;
}
else {
Node* temp = front;
front = front->next;
rear->next = front;
delete temp;
}
}
    //function to display the elements of the queue
void displayQueue() {
Node* temp = front;
if (front ==0) {
cout << "Queue is empty" << endl;
return;
}
cout << "Elements in Circular Queue are: ";
do {
cout << temp->data << " ";
temp = temp->next;
}while(temp!=front);
cout<<endl;
}
 //main function to implement the menu driven approch
int main() {
int choice, value;
do {
 cout << "1) Enqueue" <<endl;
 cout << "2) Dequeue"<<endl;
 cout << "3) Display"<<endl;
 cout << "4) Exit" <<endl;
 cout << "Enter choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
 cout << "Enter value to insert: ";
 cin >> value;
 enQueue(value);
 break;
 case 2:
 deQueue();
 break;
 case 3:
 displayQueue();
 break;
 case 4:
 cout << "Exiting..." << endl;
 break;
 default:
 cout << "Invalid choice" << endl;
}
}
while (choice != 4);
return 0;
    }
    /*CREATED BY
1) NEHMYA BIRUK
ID(04601/14) --- SECTION-3

2) DAGMAWI TEFERI
ID(04606/14) --- SECTION-3
*/
