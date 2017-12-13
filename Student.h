#pragma once

#include <iostream>

using namespace std;

class Student {
 public:
  Student(string* name);
  ~Student();

  //Method created for the purpose of testing
  string* getName();

 private:
  string* name;
};
