// Author ~ Rajdeep Dutta

// Linked List Traversal.......

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};

void traversal(struct Node *ptr){
	while(ptr != NULL){
		printf("The Elements are : %d \n",ptr->data);			// Code for Traversal
		ptr = ptr->next;
	}
}

int main(){
	struct Node *head;
	struct Node *second;
	struct Node *third;
	
	head = (struct Node*) malloc(sizeof(struct Node));
	second = (struct Node*) malloc(sizeof(struct Node));
	third = (struct Node*) malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = second;
	
	second->data = 7;
	second->next = third;
	
	third->data = 10;
	third->next = NULL;
	
	traversal(head);

	return 0;	
}
