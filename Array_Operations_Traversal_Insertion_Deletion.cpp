#include<stdio.h>

void show(int arr[],int n){
	for(int i=0;i<n;i++){				//code_for_Traversal
		printf("%d ",arr[i]);
	}
}

void do_insertion(int arr[],int element,int index, int size,int capacity){
	if (size<capacity){
		for(int i=size-1;i>=index;i--){
			arr[i+1]=arr[i];				//code_for_Insertion
		}
		arr[index]=element;
	}
}

void do_deletion(int arr[],int index, int size,int capacity){
	if (size<capacity){
		for(int i=index;i<size-1;i++){
			arr[i]=arr[i+1];				//code_for_Deletion
		}
	}
}

int main(){
	
	int arr[50]={1,2,3,11,22,33};
	int size=6;
	int element,index;
	printf("The array is...\n");
	show(arr,size);
	printf("\nEnter the element you want to add :");
	scanf("%d",&element);
	printf("Enter the index :");
	scanf("%d",&index);
	if(index>size){
		
		printf("The index is out of range.....\n");
	}
	do_insertion(arr,element,index,size,50);
	size=size+1;
	show(arr,size);
	
	printf("\nEnter the index whose value you want to delete :");
	scanf("%d",&index);
	do_deletion(arr,index,size,50);
	size-=1;
	show(arr,size);
	return 0;
}
