#include <stdio.h>
#include <stdlib.h>


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

void main() {
	int len = 10;
	int u_arr[] = {4, 1, 7, 9, 5, 8, 2, 0, 6, 3};

	int *ans = bubbleSort(u_arr, len);
	for (int i=0; i<len; i++) printf("%d ", ans[i]);
}
