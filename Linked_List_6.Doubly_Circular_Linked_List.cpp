#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data; 
	struct Node *prev;
	struct Node *next;
};

void traversal(struct Node *head){
	struct Node *ptr = head;
	printf("Elements are :\n");
	while(ptr != NULL){
		printf("%d \n",ptr->data);
		ptr = ptr->next;
	}
	
}

int main(){
	struct Node *head = (struct Node*)malloc(sizeof(struct Node));
	struct Node *second = (struct Node*)malloc(sizeof(struct Node));
	struct Node *third = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 3;
	head->prev = NULL;
	head->next = second;
	
	second->data = 5;
	second->prev = head;
	second->next = third;
	
	third->data = 7;
	third->prev = second;
	third->next = NULL;
	
	traversal(head);
	return 0;
}

