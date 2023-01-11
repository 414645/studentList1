#include <iostream>
#include <cstring>

#include "node.h"

using namespace std;

Node::Node() {

}


Node::Node(Student* newStudent) {
  myStudent = newStudent;
  //problems? doesent quit at this though

  //do something about node* not existing
}


Node::~Node() {

}

Node* Node::getNext() {
  return nextNode;
}

Student* Node::getStudent() {
  return myStudent;
}

void Node::setNext(Node* newNode) {
  //nextNode = newNodde
}

