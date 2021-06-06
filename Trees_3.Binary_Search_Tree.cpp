#include<stdio.h>
#include<stdlib.h>

// Tree :
//	     	10
//   	   /  \
//  	  5    15
//	    / \ 
//     2  8

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *createNode(int data){
	struct Node *n = (struct Node*)malloc(sizeof(struct Node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}

int isBST(struct Node *root){
	static struct Node *prev = NULL;
	if (root!=NULL){
		if(!isBST(root->left)){
			return 0;
		}
		if (prev!=NULL && root->data <= prev->data){
			return 0;
		}
		prev = root;
		return isBST(root->right);
	}
	else{
		return 1;
	}
}

int main(){
	struct Node *p = createNode(10);
	struct Node *p1 = createNode(5);
	struct Node *p2 = createNode(15);
	struct Node *p3 = createNode(2);
	struct Node *p4 = createNode(8);
	
	p->left = p1;
	p->right = p2;
	
	p1->left = p3;
	p1->right = p4;
	
	if(isBST(p)){
		printf("Its a Binary Search Tree");
	}
	else{
		printf("Not a Binary Search Tree");
	}
	return 0;
}
