// Trees Creation
//	     	 3
//   	   /  \
//  	  4    5
//	    / \ 
//     11 12


// Linked Representation

//                   *           3           *
//                   |                       |
//             *     4      *            *   5   *
//             |            |			 |		 |
//         *  11  *	     *  12  *		Null    Null
//         |      |      |      |
//       Null   Null   Null    Null



#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *CreateNode(int data){
	struct Node *n = (struct Node*)malloc(sizeof(struct Node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}

int main(){
	/*
	struct Node *t = (struct Node*)malloc(sizeof(struct Node));
	t->data = 3;
	
	struct Node *t1 = (struct Node*)malloc(sizeof(struct Node));
	t1->data = 4;
	
	struct Node *t2 = (struct Node*)malloc(sizeof(struct Node));
	t2->data = 5;
	
	struct Node *t3 = (struct Node*)malloc(sizeof(struct Node));
	t3->data = 11;
	
	struct Node *t4 = (struct Node*)malloc(sizeof(struct Node));
	t4->data = 12;
	*/
	
	// Second & the most efficient way :-
	
	struct Node *t = CreateNode(3);
	struct Node *t1 = CreateNode(4);
	struct Node *t2 = CreateNode(5);
	struct Node *t3 = CreateNode(11);
	struct Node *t4 = CreateNode(12);
	
	t->left = t1;
	t->right = t2;
	 
	t1->left = t3;
	t1->right = t4;

	printf("%d %d %d %d %d",t->data ,t1->data,t2->data,t3->data,t4->data);
	return 0;
}
