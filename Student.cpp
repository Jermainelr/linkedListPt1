#include <iostream>

#include "Student.h"

using namespace std;

//Student constructor
Student::Student(string* _name) {
  name = _name;
}

//Student destructor
Student::~Student() {

}

//getName function returns student name
string* Student::getName() {
  return name;
}
