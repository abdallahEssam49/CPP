#include<iostream>

 // Merge two lists A and B in a sorted form
using namespace std;

  //Node definition
  struct Node
  {
     int data;
     struct Node *next;
  };

//Recursive Solution
Node* MergeListsRec(Node *headA, Node* headB)
{
    Node *new_head = NULL;

   //base case
   if(headA==NULL)return headB; //if List A is null
   else if(headB==NULL)return headA;//if List B is null


    if(headA->data <= headB->data)
      {
          new_head = headA;
          new_head->next= MergeListsRec(headA->next,headB);
      }
      else
      {
          new_head=headB;
          new_head->next = MergeListsRec(headB->next,headA);
      }

   return(new_head);

}

// Iterative Solution


Node* MergeList(Node *headA, Node *headB)
{
	Node *new_head=NULL;
	Node *temp; //dummy variable

	if(headA==NULL)return headB;
	else if(headB==NULL)return headA;

	//if data in node A < data in node B then assign temp to the smaller node
	if(headA->data <= headB->data)
    {
		temp=headA;
		headA = temp->next; //head A moves to the next of temp
	}
	else
    {
		temp=headB;
		headB=temp->next; //headB moves to next of temp
	}

	new_head=temp;// now we need to assign new_head to temp node which is the node with smallest value
	//this new_head will be returned by the function

	while(headA && headB)
    {

		if(headA->data <= headB->data)
        {
			temp->next=headA;
			temp=headA;
			headA=headA->next;
		}
		else
        {
			temp->next=headB; //temp links to headB
			temp=headB;//temp becomes headB node
			headB=headB->next;//headB moves to next to temp
		}

	}

	if(headA==NULL) temp->next=headB; //when List A is finished
	if(headB==NULL) temp->next=headA; //when list B is finished


	return(new_head);//will return the new header of the sorted merged LL
}


void traverse(Node *head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
}

int main()
{

	//list-A
	struct Node *n1 = new Node();
	struct Node *n2 = new Node();
	struct Node *n3 = new Node();
	struct Node *n4 = new Node();


	//List B
	struct Node *m1 = new Node();
	struct Node *m2 = new Node();
	struct Node *m3 = new Node();
	struct Node *m4 = new Node();


	n1->data = 1;
	n2->data = 2;
	n3->data = 10;
	n4->data = 12;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;


	m1->data = 3;
	m2->data = 4;
	m3->data = 6;
	m4->data = 8;

	m1->next = m2;
	m2->next = m3;
	m3->next = m4;
	m4->next = NULL;

	Node *new_head = MergeListsRec(n1,m1);
	traverse(new_head);
	return 0;

}
