#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int *bubbleSort(int arr[], int len) {
	int sorted = 0;
	int j = len - 1;
	
	while (1) {
		if (arr[j-1] > arr[j]) {
			int temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
		
			sorted = 1; 
		}

		j--;

		if (j == 0 && sorted == 0) break;
		if (j == 0) {
			sorted = 0;
			j = len - 1;
		}
	}

	int *s_arr = (int *)malloc(sizeof(int) * len);
	for (int i=0; i<len; i++) s_arr[i] = arr[i];

	return s_arr;
}

int *selectionSort(int arr[], int len) {
	int i, j, x;

	for (i = 0; i < len; i++) {	
		int min = INT_MAX;
		for (j = i; j < len; j++) { 
			if (arr[j] < min) {
				min = arr[j];
				x = j;
			}
		}

		arr[x] = arr[i];
		arr[i] = min;
	}
	
	int *s_arr = (int *)malloc(sizeof(int) * len);
	for (int i=0; i<len; i++) s_arr[i] = arr[i];

	return s_arr;
}

void main() {
	int len = 10;
	int u_arr[] = {4, 1, 7, 9, 5, 8, 2, 0, 6, 3};

	int *arr = selectionSort(u_arr, len);
	for (int i=0; i<len; i++) printf("%d ", arr[i]);
}
