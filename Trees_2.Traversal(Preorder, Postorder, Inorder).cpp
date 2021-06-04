// Trees Creation
//	     	 3
//   	   /  \
//  	  4    5
//	    / \ 
//     11 12

// Preorder :- Root -> Left -> Right     3->4->11->12->5
// Postorder :- Left -> Right -> Root   11->12->4->5->3
// Inorder :- Left -> Root-> Right      11->4->12->3->5


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

void PreOrder(struct Node *root){		// PreOrder :-  Root -> Left -> Right
	if(root!=NULL){
		printf("%d ",root->data);
		PreOrder(root->left);
		PreOrder(root->right);	
	}
}

void PostOrder(struct Node *root){		// Postorder :- Left -> Right -> Root
	if(root!=NULL){
		PostOrder(root->left);
		PostOrder(root->right);
		printf("%d ",root->data);
	}
}

void InOrder(struct Node *root){		// Inorder :- Left -> Root-> Right
	if(root!=NULL){
		InOrder(root->left);
		printf("%d ",root->data);
		InOrder(root->right);	
	}
}

int main(){
	struct Node *t = CreateNode(3);
	struct Node *t1 = CreateNode(4);
	struct Node *t2 = CreateNode(5);
	struct Node *t3 = CreateNode(11);
	struct Node *t4 = CreateNode(12);
	
	t->left = t1;
	t->right = t2;
	 
	t1->left = t3;
	t1->right = t4;
	
	printf("Preorder: ");
	PreOrder(t);
	printf("\n");
	
	printf("Postorder: ");
	PostOrder(t);
	printf("\n");
	
	printf("Inorder: ");
	InOrder(t);

	return 0;
}
