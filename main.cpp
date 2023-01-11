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

void addStudent() {
  //ADD needs first, last, id, gpa
  //needs recursion
  //sorts from least to greatest Id of were to put new student

  cout << "add" << endl;
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
