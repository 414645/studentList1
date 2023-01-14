#include <iostream>

#include "student.h"
#include "node.h"

using namespace std;

//By Ryan Veith
//
//This is a test class for the linked lists project

void addStudent(Node* &head, Node* current, Node* previous,
		Student* newStudent);
void printStudent(Node* head, Node* current);
void deleteStudent(Node* &head, Node* current, Node* previous,
		   int identification);
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
      char first[10];
      char last[10];
      int ID;
      float GPA;
      //get studnet info
      cout << "Enter the Students first name" << endl;
      cin.getline(first, 10);
      cout << "Enter the Students last name" << endl;
      cin.getline(last, 10);
      cout << "Enter the Students ID number" << endl;
      cin >> ID;
      cout << "Enter the Students GPA" << endl;
      cin >> GPA;
      //add student
      Student* newStudent = new Student(first, last, ID , GPA);
      addStudent(head, head, NULL, newStudent);
    }
    if (strcmp(input, "PRINT") == 0) {
      printStudent(head, head);
    }
    if (strcmp(input, "DELETE") == 0) {
      //ask what one and that gets sent too
      deleteStudent(head, head, NULL,
		    4); //4 needs to be UI
    }
    if (strcmp(input, "AVERAGE") == 0) {
      averageStudent(head);
    }
    if (strcmp(input, "QUIT") == 0) {
      quit = true;
    }

  }
}



//needs recursion so two adds one here and then one for recursion
//sorts from least to greatest Id of were to put new student
void addStudent(Node* &head, Node* current, Node* previous,
		Student* newStudent) {
  cout << "addStudent Called" << endl;
  cout << endl;
  cout << endl;

  //figure out if we add it here or move to next place in list
  if (current != NULL) {
    cout << "current != NULL" << endl;

    //if studentID > current Location in list studentID go to next
    if (newStudent->getID() > current->getStudent()->getID()) {      
      cout << "studnetID > current spots studentID" << endl;
      
      if (current->getNext() != NULL) {
	cout << "goiing next " << endl;
	
	addStudent(head, current->getNext(), current, newStudent);
      }
      else {
	//put it here next we are at end of list
	cout << "end of list" << endl;
    
	//add new one (end of list so next is void)
        Node* newNode = new Node(newStudent);
	//reset pointers
	current->setNext(newNode);
      }
    }
    //studentId is <= to current location so add it here
    else {
      cout << "<= to current location so add it" << endl;
      //This does not work specificly if it is the first one
      //since it is added before head
      //so set a new head
      
      Node* newNode = new Node(newStudent);
      newNode->setNext(current);

      if (previous == NULL) {
	cout << "new head" << endl;
	head = newNode;
      }
      else {
	previous->setNext(newNode);
      }
      
      //reset pointers
      
      //current->setNext(newNode);
      
      
    }
  }
  else {
    Node* next = NULL;
    if (previous == NULL) {
      cout << "replace head node" << endl;
      //repaces head node
      head = new Node(newStudent);
    }
  }
}

void printStudent(Node* head, Node* current) {
  cout << "prining" << endl;
  //check if it is first thing in list
  if (current == head) {
    cout << "StudentList:" << endl;
  }
  //cout next student
  if (current != NULL) {
    //cout << "next != NULL" << endl;
    cout << current->getStudent()->getFirst() << ", ";
    cout << current->getStudent()->getLast() << ", ";
    cout << current->getStudent()->getID() << ", ";
    cout << current->getStudent()->getGPA() << endl;
    //dont forgetrecusion
    printStudent(head, current->getNext());
    cout << "end" << endl;
  }
}

void deleteStudent(Node* &head, Node* current, Node* previous,
		   int identification) {
  //delete needs id
  //this will be basically same as add but delete current
  //and have previous go to current->getNext or void in last clase spot
  cout << "del" << endl;
  
  //figure out if we there is anything to even delete
  if (current != NULL) {
    cout << "current != NULL" << endl;
    //is it the correct one
    if (current->getStudent()->getID() == identification) {      
      //delete it
      cout << "found a 4" << endl;

      if (previous != NULL) {
	cout << "pre != null" << endl;
	if (current->getNext() != NULL) {
	  cout << "found something to delte" << endl;
	  previous->setNext(current->getNext());
	  delete current;
	}
	else {
	  cout << "deleting last" << endl;
	  previous->setNext(NULL);
	  delete current;
	}
      }
      else {
	//if we delete set 2nd to head then delete
      }
      
    }
    
    //go next
    cout << "go next??? " << endl;
    if (current->getNext() != NULL) {
      deleteStudent(head, current->getNext(), current, identification);
    }
    
  }
  else {
    //list is blank nothing to replace
  }

  
}

void averageStudent(Node* head) {

  cout << "average" << endl;
}
