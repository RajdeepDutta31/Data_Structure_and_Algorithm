// Author ~ Rajdeep Dutta

//Linked List Deletion............
	// Case 1 : Delete the first Node
	// Case 2 : Delete a Node In between
	// Case 3 : Delete the end
	// Case 4 : Delete a given value from the list

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
	
};

void traversal(struct Node *ptr){
	while (ptr!=NULL){
		printf("Elements are.....%d\n",ptr->data);       // Code for Traversal
		ptr = ptr->next;
	}	
}

// Case 1:
struct Node *deletefirst(struct Node *head){
	struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr = head;
	head = head->next;												// Delete the first Node
	free(ptr);
	return head;
}

// Case 2:
struct Node *deleteinbtw(struct Node *head, int index){
	struct Node *p = head;
	struct Node *q = head->next ;									// Delete a Node in between
	int i = 0;
	while(i!=index-1){
		p = p->next ;
		q = q->next ;
		i++;		
	}
	p->next = q->next;
	free(q);
	return head;
}

// Case 3:
struct Node *deleteatend(struct Node *head){
	struct Node *p = head;
	struct Node *q = p->next; 
	while(q->next != NULL){											// Delete the end Node
		p = p->next;
		q = q->next;
	}
	p->next = NULL;
	free(q);
	return head;
}

// Case 4:
struct Node *deleteagivenvalue(struct Node *head, int value){
	struct Node *p = head;
	struct Node *q = head->next;
	while(q->data!=value && q->next!=NULL){
		p = p->next;
		q = q->next;
	}																// Delete a given value from the linked list
	p->next = q->next;
	free(q);
	return head;
}


int main(){
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	struct Node *second = (struct Node*)malloc(sizeof(struct Node));
	struct Node *third = (struct Node*)malloc(sizeof(struct Node));
	struct Node *forth = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 3;
	head->next = second;
	
	second->data = 5;
	second->next = third;
	
	third->data = 9;
	third->next = forth;
	
	forth->data = 11;
	forth->next = NULL;
	printf("Before Deletion....\n");
	traversal(head);
	printf("\nAfter Deletion.....\n");
	//head = deletefirst(head);
	//head = deleteatend(head);
	//head = deleteinbtw(head,2);
	head = deleteagivenvalue(head,9);
	traversal(head);
	return 0;
	 
}
