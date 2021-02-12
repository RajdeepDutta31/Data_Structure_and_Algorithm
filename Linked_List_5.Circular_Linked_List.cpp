// Author ~ Rajdeep Dutta

// Circular Linked List Creation.......

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;					
	struct Node *next;				//self refrencing structure
};

void traversal(struct Node *head){
	struct Node *ptr = head;
	printf("Elements are :\n");
	printf("%d \n",ptr->data);
	while(ptr->next!=head){          	// or we can use do-while loop
		ptr = ptr->next;
		printf("%d \n",ptr->data);
	}
}

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
	third->next = head;

	traversal (head);
	return 0;
	
}
