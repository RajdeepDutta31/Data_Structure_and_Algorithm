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

int iterative_Search(struct Node *root, int element){
	while (root!=NULL){
		if (element == root->data){
			return 1;
		}
		else if(element < root->data){
			root = root->left;
		}
		else {
			root = root->right;
		}
	}
	return 0;
}

int main(){
	int n;
	struct Node *p = createNode(10);
	struct Node *p1 = createNode(5);
	struct Node *p2 = createNode(15);
	struct Node *p3 = createNode(2);
	struct Node *p4 = createNode(8);
	
	p->left = p1;
	p->right = p2;
	
	p1->left = p3;
	p1->right = p4;
	
	printf("Enter the element you want to search : ");
	scanf("%d",&n);
	
	if (iterative_Search(p,n)){
		printf("Found it");
	}
	else{
		printf("Not Found");
	}
	return 0;
}
