#include <iostream>
#include <cstring>

#include "node.h"

using namespace std;

Node::Node() {

}


Node::Node(Student* newStudent) {
  cout << "hello world" << endl;
  myStudent = newStudent;
  //line of code above works

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

