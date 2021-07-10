#include<stdio.h>
#include<stdlib.h>
struct Queue{
	int size;
	int f;
	int r;
	int *arr;
};

void traverse(struct Queue *q){
	for(int i=0;i<=q->r;i++){
		printf("%d ",q->arr[i]);
	}
}

int main(){
	struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));
	q->size = 10;
	q->f = -1;
	q->r = -1;
	q->arr = (int*)malloc(q->size * sizeof(int));
	
	// Inserting elements manually: 3,7,10,15
	q->r = q->r + 1;
	q->arr[q->r] = 3;
	
	q->r = q->r + 1;
	q->arr[q->r] = 7;
	
	q->r = q->r + 1;
	q->arr[q->r] = 10;

	q->r = q->r + 1;
	q->arr[q->r] = 15;
	
	printf("The elements in Queue are : ");
	traverse(q);

	return 0;
}
