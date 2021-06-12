#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;;
	struct Node *left;
	struct Node *right;
};

struct Node *CreateNode(int data){
	struct Node *n = (struct Node *)malloc(sizeof(struct Node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;	
}

void insert(struct Node *root, int key){
	struct Node *prev = NULL;
	while(root!=NULL){
		prev = root;
		if(root->data == key){
			printf("%d is already there",key);
			return;
		}
		else if(key<root->data){
			root = root->left ;
		}							// reach the leaf Node
		else{
			root = root->right;
		}
	}
	struct Node *newNode = CreateNode(key);		// prev is the Parent Node
	if (key < prev->data){
		prev->left = newNode;
	}
	else{
		prev->right = newNode;
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
	struct Node *p = CreateNode(10);
	struct Node *p1 = CreateNode(5);
	struct Node *p2 = CreateNode(15);
	struct Node *p3 = CreateNode(1);
	struct Node *p4 = CreateNode(8);
	
	p->left = p1;
	p->right = p2;
	
	p1->left = p3;
	p1->right = p4;
	
		
	insert(p,17);
	insert(p,2);
	InOrder(p);
	return 0;
}
