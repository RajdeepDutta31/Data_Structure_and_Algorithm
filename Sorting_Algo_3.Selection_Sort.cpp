// Selection Sort 
#include<stdio.h>

void printArr(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void selection_sort(int arr[], int n){
	int temp,min_index;
	for(int i=0; i<n-1; i++){
		min_index = i;
		for(int j=i+1; j<n; j++){
			if (arr[j]<arr[min_index]){
				min_index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}

int main(){
	int arr[] = {2,76,4,56,1};
	int n = 5;
	printArr(arr,n);
	selection_sort(arr,n);
	printf("After Sorting...\n");
	printArr(arr,n);
	return 0;
}
