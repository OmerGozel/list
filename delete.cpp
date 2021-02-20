#include <stdlib.h>
#include <iostream>
#include "list.h"

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





