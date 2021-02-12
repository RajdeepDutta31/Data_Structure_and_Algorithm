#include <stdio.h>
#include <stdlib.h>

struct stack {
	int size;
	int top;
	int * arr;
};

int is_empty(struct stack *ptr){
	if(ptr->top == -1){
		return 1;
	}
	else {
		return 0;
	}
}

int is_full(struct stack *ptr){
	if(ptr->top == ptr->size - 1){
		return 1;
	}
	else {
		return 0;
	}
}


int main(){
	
	struct stack *s = (struct stack *) malloc(sizeof(struct stack));
	s->size = 80;
	s->top = -1;
	s->arr = (int *)malloc(s->size * sizeof(int));
	
	s->arr[0] = 15;   	// Putting elements manually	
	s->top++;
	
	if (is_empty(s)){
		printf("The Stack is empty \n");
	}
	else {
		printf("The Stack is not empty \n");
	}
	
	printf("Elements are \n");
	printf("%d\n",s->arr[0]);
	
	
	return 0;
}
