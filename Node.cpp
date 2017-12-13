#include <iostream>

#include "Node.h"

using namespace std;

//Node(Student*) constructor
Node::Node(Student* _student) {
  student = _student;
}

//Node(Student*) destructor
Node::~Node() {

}

//getNext function returns next node
Node* Node::getNext() {
  return next;
}

//getStudent returns student
Student* Node::getStudent() {
  return student;
}

//setNext sets the next node
void Node::setNext(Node* _next) {
  next = _next;
}
