#ifndef Node_H
#define Node_H

#include <iostream>
#include <cstring>

#include "student.h"
//format? ^^^^^   .h not cpp

//needs a pointer to student and next node
//also funcions

class Node {
 public:
  Node(); //not used
  Node(Student*);
  //if nothings its poinint to either a blank or something?
  ~Node(); //all delete
  
  //required funcions
  //Node* getNext();
  //Student* getStudent();
  //void setNext(Node*);
  
 private:
  //Causes segmentaiton fault
  //Node* nextNode = new Node();

  //just fine
  Student* myStudent = new Student();

  //none?
};

#endif
