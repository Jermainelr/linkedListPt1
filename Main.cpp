#include <iostream>

#include "Node.h"
#include "Student.h"

int main() {
  Student* john = new Student(new string("John"));
  Student* alex = new Student(new string("Alex"));
  Student* larry = new Student(new string("Larry"));

  Node* node1 = new Node(john);
  Node* node2 = new Node(alex);
  Node* node3 = new Node(larry);

  node1->setNext(node2);
  node2->setNext(node3);
  node3->setNext(node1);

  cout << "Node 1 Student is: " << *node1->getStudent()->getName() << endl;
  cout << "Node 2 Student is: " << *node2->getStudent()->getName() << endl;
  cout << "Node 3 Student is: " << *node3->getStudent()->getName() << endl;
  
  cout << "Node 1 Next Node Student is: " << *node1->getNext()->getStudent()->getName() << endl;
  cout << "Node 2 Next Node Student is: " << *node2->getNext()->getStudent()->getName() << endl;
  cout << "Node 3 Next Node Student is: " << *node3->getNext()->getStudent()->getName() << endl;
}
