#include <stdlib.h>
#include <iostream>
#include "list.h"

using namespace std;

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

