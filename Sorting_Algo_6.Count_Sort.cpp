// Count Sort
#include<stdio.h>
#include<stdlib.h>

void printArr(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int maxArr(int arr[],int n){
	int max = 0;
	for(int i=0;i<n;i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}

void CountSort(int arr[],int n){
	int range = maxArr(arr,n);
	int i,j;
	int *count = (int *)malloc((range+1) * sizeof(int));
	for(i=0;i<range+1;i++){
		count[i] = 0;
	}
	for(j=0;j<n;j++){
		count[arr[j]]= count[arr[j]] + 1; 
	}
	i = 0; // for count array
	j = 0; // for given array
	while(i<=range){
		if (count[i]>0){
			arr[j] = i;
			count[i] = count[i] - 1;
			j++;
		}
		else{
			i++;
		}
	}
	
}

int main(){
	int arr[] = {42,35,67,5,1,9,42};
	int n = 7;
	printArr(arr,n);
	CountSort(arr,n);
	printArr(arr,n);
	return 0;
}
