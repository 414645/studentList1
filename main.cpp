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
void deleteStudent(Node* &head);
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
      
      //if (previous == NULL) {
	//if previous is 0 it breaks since head
	//anything before head is neverchecked ever agian
	//cout << "first" << endl;	
	//cout << "replace head node" << endl;
	//adds new one after head
	//Node* LocalNextNode = head->getNext;

	/*
	Node* newNode = new Node(head->getStudent);
	newNode->setNext(head->getNext);
	//replaces head node;
	head = new Node(newStudent);
	head->setNext(newNode);
	//*/
      //}
      
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

      /*
      cout << "Adress: " << next << endl;;
      //cout << next->getStudent()->getFirst();
      current->setNext(next);
      if (current->getNext() == next) {
	cout << "party" << endl;
	//cout << next->getStudent()->getFirst() << endl;
      }
      //*/
      
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

void deleteStudent(Node* &head) {
  //delete needs id  
  cout << "del" << endl;
  if (head != NULL) {
    delete head;
    cout << "deleted head" << endl;
  }
}

void averageStudent(Node* head) {

  cout << "average" << endl;
}
