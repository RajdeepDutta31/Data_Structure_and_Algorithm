#include<stdio.h>

void printArr(int arr[], int n){
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void insertionSort(int arr[], int n){
	int i;
	int j;
	for(i=1;i<n;i++){
		int key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}	
		arr[j+1]=key;
	}
	
}

int main(){
	int arr[] = {7,2,45,32,98,65};
	int n=6;
	printArr(arr,n);
	insertionSort(arr,n);
	printf("After Sorting ...\n");;
	printArr(arr,n);
	return 0;
}
