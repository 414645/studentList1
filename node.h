#ifndef Node_H
#define Node_H

#include <iostream>
#include <cstring>
#include "student.ccp"
//format? ^^^^^     also assumption?

//needs a pointer to student and next node
//also funcions

class Student {
 public:
  Node(); //not used
  Node(Student*);
  //if nothings its poinint to either a blank or something?
  ~Node(); //all delete
  
  //required funcions
  Node* getNext();
  Student* getStudent();
  void setNext(Node*);
  
 private:
  //absoultit butchered come back later
  Node* nextNode = new Node*;
  Student* myStudent = new Student*;
  //none?
};

#endif
