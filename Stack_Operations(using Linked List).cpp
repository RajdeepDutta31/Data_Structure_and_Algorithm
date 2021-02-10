#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *top = NULL;

void traversal(struct Node *ptr){
	while(ptr!=NULL){
		printf("Elements are : %d\n",ptr->data);
		ptr = ptr->next;
	}
}

int is_full(struct Node *top){
	struct Node *p = (struct Node*) malloc(sizeof(struct Node));
	if(p==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

int is_empty(struct Node *top){
	if (top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

struct Node* push(struct Node *top, int value){
	if(is_full(top)){
		printf("Stack Overflow  !!! \n");
	}
	else{
		struct Node *q = (struct Node*)malloc(sizeof(struct Node));
		q->data = value;
		q->next = top;
		top = q;
		return top;
	}
}

int pop(struct Node *tp){
	if(is_empty(tp)){
		printf("Stack Underflow !! \n");
	}
	else{
		struct Node *p = tp;
		top = tp->next;
		int popped_el = p->data;
		free(p);
		return popped_el;
	}
}

int main(){
	top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    
    traversal(top);
    
    printf("Popped : %d\n",pop(top));
    
	traversal(top);
	return 0;
}
