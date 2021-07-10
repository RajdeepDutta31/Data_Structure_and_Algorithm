#include<stdio.h>
#include<stdlib.h>
struct Queue{
	int size;
	int f;
	int r;
	int *arr;
};

void traverse(struct Queue *q){
	for(int i=q->f ; i<=q->r ; i++){
		printf("%d ",q->arr[i]);
	}
}

int isEmpty(struct Queue *q){
	if(q->r == -1){
		//printf("Queue is Empty");
		return 1;
	}
	return 0;
}

int isFull(struct Queue *q){
	if(q->r == q->size-1){
		//printf("Queue Overflow !!");
		return 1;
	}
	return 0;
}

void enQueue(struct Queue *q, int data){
	if (q->f == -1)
		q->f = 0;
	if(!isFull(q)){
		q->r = q->r + 1;
		q->arr[q->r] = data;
	}	
	else{
		//printf("Can't insert %d as the Queue is Full \n",data);
	}
}

void deQueue(struct Queue *q){
	if(!isEmpty(q)){
		while(q->f != q->r){
			q->arr[q->f] = q->arr[q->f+1];
			q->f++;
		}
		q->f = 0;
		q->r = q->r - 1;
	}
}

int main(){
	struct Queue *q = (struct Queue*)malloc(sizeof(struct Queue));
	q->size = 5;
	q->f = -1;
	q->r = -1;
	q->arr = (int*)malloc(q->size * sizeof(int));
	
	enQueue(q,3);
	enQueue(q,5);
	enQueue(q,7);
	enQueue(q,8);
	enQueue(q,10);

	deQueue(q);
	enQueue(q,15);
	
	
	printf("The elements in Queue are : ");
	traverse(q);
	
	if(isEmpty(q)){
		printf("Queue is empty");
	}
	return 0;
}
