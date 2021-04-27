#include<stdio.h>

void printArr(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);		//array traversal
	}
	printf("\n");
}


void bubblesort(int *arr, int n){
	int temp;
	int i;
	for(i=0;i<n-1;i++){     // number of passes
		for(int j=0;j<n-i-1;j++){     // number of comparision
			if (arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];		// swap
				arr[j+1]=temp;
			}
		}
	}
	printf("Bubble Sort has taken %d passes \n",i);      // takes (n-1) no of passes
}

void adaptive_bubble_sort(int arr[], int n){				 
	int temp;
	int i;
	int isSorted = 0;
	for(i=0;i<n;i++){    // number of passes
		isSorted = 1;
		for(int j=0;j<n-i-1;j++){     // number of comparision
			if (arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];		// swap
				arr[j+1]=temp;
				isSorted = 0;
			}	
		}
		if (isSorted){
			printf("Adaptive Bubble Sort has taken %d passes \n",i);          	//takes less time, less no of passes, more efficient
			return;
		}
	}
}	
	

int main(){
	int arr[] = {78,43,2,56,37};
	int arr1[] = {78,43,2,56,37};
	int n=5;
	printArr(arr,n);      // Before Sorting
	bubblesort(arr,n); 
	printArr(arr,n);
	adaptive_bubble_sort(arr1,n); 
	printArr(arr1,n);      // After Sorting
	return 0;
}
