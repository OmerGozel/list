#include <stdlib.h>
#include <iostream>
#include "List.h"

using namespace std;

 
List::List (void) //constructor
 {
  head = NULL;
 }

bool List::IsEmpty()
	 {
		 return head == NULL;
	 }
	 

List::~List(void)
{
 Node* currNode = head, *nextNode = NULL;

 while (currNode != NULL)
 {
  nextNode = currNode -> next;
  // destroy the current node
  delete currNode;
  currNode = nextNode;
 }
}

void List::DisplayList (void)
{
 int num = 0;
 
 Node* currNode = head;

 while (currNode != NULL)
 {
 cout << currNode -> data << endl;
 currNode = currNode -> next;
 
 }
}

Node* List::InsertNode (int index, double x)
{
	if (index < 0) return NULL;

	int currIndex = 1;
	Node* currNode = head;

	while (currNode && index > currIndex)
	{
		currNode = currNode -> next;
		currIndex++;
	}
	if (index > 0 && currNode == NULL ) return NULL;

	Node* newNode = new Node;
	newNode -> data = x;

	if (index == 0) //ilk node
	{
		newNode -> next = head;
		head = newNode;
	}
	else {//son ve ortaya al
		newNode -> next = currNode -> next;
		currNode -> next = newNode;
	}
	return newNode;
}
int List::DeleteNode (double x) {
	Node* prevNode = NULL;
	Node* currNode = head;
	int currIndex = 1;

	while (currNode && currNode -> data!= x) {
		prevNode = currNode;
		currNode = currNode -> next;
		currIndex++;
	}
	if (currNode) {
		if (prevNode) {
			prevNode -> next = currNode -> next;
			delete currNode;
		}
		else {
			head = currNode -> next;
			delete currNode;
		}
		return currIndex;
	}
	return 0;
}
