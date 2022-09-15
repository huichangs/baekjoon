#include<stdio.h>
#include<stdlib.h>

int equalArray(int arr[], int find[], int size){
	int i;
	for(i = 0; i < size; i++){
		if(arr[i] != find[i]){
			return 0;
		}
	}
	return 1;
}



int insertSort(int arr[], int find[], int size){
	int i,j,temp;
	
	if(equalArray(arr, find, size) == 1){
		return 1;
	}
	
	for(i = 1; i < size; i++){
		temp = arr[i];

		for(j = i -1; j >= 0 && arr[j] > temp; j--){
			arr[j+1] = arr[j];
			if(equalArray(arr, find, size) == 1){
				return 1;
			}
		}
		
		arr[j + 1] = temp;
		if(equalArray(arr, find, size) == 1){
			return 1;
		}
	}
	
	return 0;
}

int main() {
	int size, i;

	scanf("%d", &size);

	int* num = (int*)malloc(sizeof(int) * size);
	int* find = (int*)malloc(sizeof(int) * size);

	for (i = 0; i < size; i++) {
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i < size; i++) {
		scanf("%d", &find[i]);
	}
	
	printf("%d", insertSort(num, find, size));


	return 0;
}
