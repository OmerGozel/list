
 class Node
{
 public:

 double data;
 Node* next;
};

 class List
{
 public:
		 
 List (void); //constructor
 ~List (void); //destructor

 bool IsEmpty();

 Node* InsertNode (int index, double x);
 int FindNode (double x);
 int DeleteNode (double x);
 void DisplayList (void);
	
 private:
 Node* head;

};

