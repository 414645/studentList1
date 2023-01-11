#include <iostream>

#include "student.h"
#include "node.h"

using namespace std;

//By Ryan Veith
//
//This is a test class for the linked lists project

void addStudent();
void printStudent();
void deleteStudent();
void averageStudent();

int main() {
  cout << "hello world" << endl;
  bool quit = false;
  char input[80];
  
  while (quit == false) {
    //get user input
    //ADD PRINT DELETE AVERAGE QUIT else HELP
    cin.getline(input, 80);
    if (strcmp(input, "ADD") == 0) {
      addStudent();
    }
    if (strcmp(input, "PRINT") == 0) {
      printStudent();
    }
    if (strcmp(input, "DELETE") == 0) {
      deleteStudent();
    }
    if (strcmp(input, "AVERAGE") == 0) {
      averageStudent();
    }
    if (strcmp(input, "QUIT") == 0) {
      quit = true;
    }

  }
}



//ADD needs first, last, id, gpa
//needs recursion
//sorts from least to greatest Id of were to put new student
void addStudent() {
  char first[10];
  char last[10];
  //char* input[10];
  //char* input[10];
  
  cout << "Enter the Students first name" << endl;
  cin.getline(first, 10);
  cout << "Enter the Students last name" << endl;
  cin.getline(last, 10);

  Student* test = new Student(first, last, 123456 , (float)1.9);
  cout << "student created" << endl;

  cout << test->getFirst() << endl;
  cout << test->getLast() << endl;
  cout << test->getID() << endl;
  cout << test->getGPA() << endl;
  
  Node* creativeNodeName = new Node(test);

  //then add next node to previous node
}

void printStudent() {
  
  cout << "print" << endl;
}

void deleteStudent() {
  //delete needs id
  
  cout << "del" << endl;
}

void averageStudent() {

  cout << "average" << endl;
}
