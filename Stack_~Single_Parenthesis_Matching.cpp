#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	char *arr;
};

int is_empty(struct stack *ptr){
	if (ptr->top == -1){
		return 1;
	}
	return 0;
}

int is_full(struct stack *ptr){
	if (ptr->top == ptr->size -1){
		return 1;
	}
	return 0;
}

void push(struct stack *ptr, char value){
	if (is_full(ptr)){
		printf("Stack Overflow !!!");
	}
	else{
		ptr->top++ ;
		ptr->arr[ptr->top] = value; 
	}
}

void pop(struct stack *ptr){
	if (is_empty(ptr)){
		printf("Stack Underflow !!");
	}
	else{
		ptr->top-- ;
		ptr->size-- ;
	}
}

int parenthesis_match(char *exp){
	
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->top = -1;
	s->size = 10;
	s->arr = (char*)malloc(s->size * sizeof(char));
	
	
	for(int i=0; exp[i]!='\0' ;i++){
		if (exp[i]=='('){
			push(s,'(');
		}
		else if(exp[i]==')'){
			if(is_empty(s)){
                return 0;
            }
			pop(s);
		}
	}
	
	if(is_empty(s)){
		return 1;
	}
	else{
	return 0;
	}
}

int main(){
	
	char *exp="(2+3())" ;
	
	if(parenthesis_match(exp)){
		printf("Parenthesis Balanced");
	}
	else{
		printf("Parenethsis Unbalanced");
	}
	
	return 0;
}
