#include <iostream>

#include "student.h"
#include "node.h"

using namespace std;

//By Ryan Veith
//
//This is a test class for the linked lists project

void addStudent(Node* head);
void printStudent(Node* head, Node* next);
void deleteStudent(Node* head);
void averageStudent(Node* head);

int main() {
  cout << "hello world" << endl;
  bool quit = false;
  char input[80];
  Node* head = NULL;
  
  while (quit == false) {
    //get user input
    //ADD PRINT DELETE AVERAGE QUIT else HELP
    cin.getline(input, 80);
    if (strcmp(input, "ADD") == 0) {
      addStudent(head);
    }
    if (strcmp(input, "PRINT") == 0) {
      printStudent(head, head);
    }
    if (strcmp(input, "DELETE") == 0) {
      deleteStudent(head);
    }
    if (strcmp(input, "AVERAGE") == 0) {
      averageStudent(head);
    }
    if (strcmp(input, "QUIT") == 0) {
      quit = true;
    }

  }
}



//ADD needs first, last, id, gpa
//needs recursion so two adds one here and then one for recursion
//sorts from least to greatest Id of were to put new student
void addStudent(Node* head) {
  char first[10];
  char last[10];
  //char* input[10];
  //char* input[10];
  
  cout << "Enter the Students first name" << endl;
  cin.getline(first, 10);
  cout << "Enter the Students last name" << endl;
  cin.getline(last, 10);

  Student* test = new Student(first, last, 123456 , (float)1.9);
  /*
  cout << "student created" << endl;

  cout << test->getFirst() << endl;
  cout << test->getLast() << endl;
  cout << test->getID() << endl;
  cout << test->getGPA() << endl;
  */
  //Node* creativeNodeName = new Node(test);
  
  //improve this later
  Node* current = head;
  if (current == NULL) {
    cout << "added first thing in list" << endl;
    //test is name of student created
    head = new Node(test);
    //cout << head->getStudent()->getFirst() << endl;;
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node(test));
    
  }
}

void printStudent(Node* head, Node* next) {
  //cout << "print" << endl;
  //check if it is first thing in list
  if (next == head) {
    cout << "StudentList:" << endl;
  }
  cout << "?";
  //cout next student
  if (next != NULL) {
    cout << "next != NULL" << endl;
    cout << next->getStudent()->getFirst() << ", ";
    cout << next->getStudent()->getLast() << ", ";
    cout << next->getStudent()->getID() << ", ";
    cout << next->getStudent()->getGPA() << endl;
    //dont forgetrecusion
    printStudent(head, next->getNext());
  }
}

void deleteStudent(Node* head) {
  //delete needs id
  
  cout << "del" << endl;
}

void averageStudent(Node* head) {

  cout << "average" << endl;
}
