// Author ~ Rajdeep Dutta

//Linked List Insertion............
	// Case 1 : At the first
	// Case 2 : In between
	// Case 3 : At the end
	// Case 4 : After a given node

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;   //Self refrencing structure 
};

void traversal(struct Node *ptr){
	while (ptr != NULL){
		printf("Elements are..%d\n", ptr->data);			//Code for Traversal
		ptr = ptr->next;
	}
	
}

// Case 1:
struct Node *Insertfirst(struct Node *head, int data){
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;														// Insertion at the first
	ptr->next = head;
	return ptr;
}

// Case 2:
struct Node *Insertbtw(struct Node *head, int index, int data){
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	struct Node *p = head;
	int i =0;
	while (i!=index-1){
		p = p->next ;														// Insertion in between
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr; 
return head;
}

// Case 3:
struct Node *InsertEnd(struct Node *head, int data){
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	struct Node *p = head;
	while (p->next != NULL){
		p = p->next;
	}																		// Insertion at the End
	p->next = ptr;
	ptr->data = data;
	ptr->next = NULL;
return head;
}


// Case 4:
struct Node *Insertatix(struct Node *head, struct Node *prevnode, int data){
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	ptr->data = data;
	ptr->next = prevnode->next;
	prevnode->next = ptr;													//Insertion after a given Node
return head;	
}

int main(){
	struct Node *head;
	struct Node *second;
	struct Node * third;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third= (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = second;
	
	second->data = 7;
	second->next = third;
	
	third->data = 11;
	third->next = NULL;
	
	printf("Before Insertion...\n");
	traversal(head);
	printf("\nAfter Insertion...\n");
	//head = Insertfirst(head,3);   				//At the First
	//head = Insertbtw(head,2,9);    				//In Between
	//head = InsertEnd(head,15);					//At the End
	head = Insertatix(head,second,10);				//After a given Node
	traversal(head);

return 0;
}

