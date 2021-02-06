#include <stdio.h>
#include <stdlib.h>

struct stack{
	int top;
	int size;
	int *arr;
};

int is_empty(struct stack *ptr){
	if (ptr->top == -1){
		return 1;					// Check if stack is Empty
	}
	else{
		return 0;
	}
}

int is_full(struct stack *ptr){
	if (ptr->top == ptr->size - 1){
		return 1;					// Check if stack is Full
	}
	else{
		return 0;
	}
}

void push(struct stack *ptr, int value){
	if (is_full(ptr)){
		printf("Stack Overflow !! Cannot push %d to the stack", value);		//Code for pushing an element to the stack
	}
	else{
		ptr->top = ptr->top + 1;
		ptr->arr[ptr->top] = value;
		printf("Pushed %d to the stack \n", value); 
	}
}

void pop(struct stack *ptr){
	if (is_empty(ptr)){
		printf("Stack underflow !!");			// Code to pop from the stack
	}
	else{
		int value = ptr->arr[ptr->top];
		ptr->top-- ;
		ptr->size -- ;
		printf("Popped %d from the stack", value);
	}
}

int stacktop(struct stack *ptr){
	return ptr->arr[ptr->top];
}

int stackbottom(struct stack *ptr){
	return ptr->arr[0];
}

void traversal(struct stack *ptr){
	for (int i=0;i<ptr->size-1;i++){
		printf("%d\n", ptr->arr[i]);		// Code for Traversal
	}
}

int peek(struct stack *ptr, int index){
		int arrix = ptr->top - index + 1;
		if (index<0){
			printf("Not a valid index");
		}
		else{
			return ptr->arr[arrix];
		}
}

int main(){
	struct stack *s = (struct stack *)malloc(sizeof(struct stack));
	s->top = -1;
	s->size = 10;
	s->arr = (int*)malloc(s->size * sizeof(int));
	
	push(s,20);
	push(s,30);
	push(s,34);
	push(s,7);
	push(s,3);
	push(s,66);
	push(s,55);
	push(s,47);
	push(s,77);
	printf("\n Before popping \n");
	traversal(s);
	pop(s);
	printf("\n After popping \n");
	traversal(s);
	
	//traversal(s);
	
	printf("\nStack Top : %d\n",stacktop(s));
	printf("Stack Bottom : %d\n",stackbottom(s));
	printf("Value at 3rd index : %d\n",peek(s,3));
	
}
