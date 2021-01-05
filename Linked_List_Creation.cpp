// Author ~ Rajdeep Dutta

// Linked List Creation.......

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;					
	struct Node *next;				//self refrencing structure
};

int main(){
	struct Node *head;
	struct Node *second;
	struct Node *third;
	
	head = (struct Node*) malloc(sizeof(struct Node));			//stuct node type data
	second = (struct Node*) malloc(sizeof(struct Node));
	third = (struct Node*) malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = second;
	
	second->data = 7;
	second->next = third;
	
	third->data = 10;
	third->next = NULL;

	return 0;
	
}
