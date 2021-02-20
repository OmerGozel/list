#include <stdlib.h>
#include <iostream>
#include "list.h"

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


