//Program made by Jermaine Lara
//12/13/17
//Linked List pt 1 program
//Made an extra function getName in order to test the other functions
//Program couts the Student of each Node and also the Student of each Node's next Node.
#include <iostream>

#include "Node.h"
#include "Student.h"

int main() {
  //Create 3 students 
  Student* john = new Student(new string("John"));
  Student* alex = new Student(new string("Alex"));
  Student* larry = new Student(new string("Larry"));

  //Assign each Student to a Node  
  Node* node1 = new Node(john);
  Node* node2 = new Node(alex);
  Node* node3 = new Node(larry);

  //setNext function sets each Node's next Node
  node1->setNext(node2);
  node2->setNext(node3);
  node3->setNext(node1);

  //First cout each Node's assigned Student
  cout << "Node 1 Student is: " << *node1->getStudent()->getName() << endl;
  cout << "Node 2 Student is: " << *node2->getStudent()->getName() << endl;
  cout << "Node 3 Student is: " << *node3->getStudent()->getName() << endl;
  
  //Then cout the Student of each Nodes next Node
  cout << "Node 1 Next Node Student is: " << *node1->getNext()->getStudent()->getName() << endl;
  cout << "Node 2 Next Node Student is: " << *node2->getNext()->getStudent()->getName() << endl;
  cout << "Node 3 Next Node Student is: " << *node3->getNext()->getStudent()->getName() << endl;
}
