#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int bubbleSort(int *arr, int len) {
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

	return 0;
}

int selectionSort(int *arr, int len) {
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
	
	return 0;
}

void main() {
	int len = 10;
	int arr[] = {4, 1, 7, 9, 5, 8, 2, 0, 6, 3};

	if (selectionSort(arr, len) == 0)
			for (int i = 0; i < len; i++)
					printf("%d ", arr[i]);

}
