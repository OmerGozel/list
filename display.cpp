#include <stdlib.h>
#include <iostream>
#include "list.h"

using namespace std;

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

