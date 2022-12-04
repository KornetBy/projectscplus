#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define q 100

int top1 = -1;
int arr1[q];

int top2 = -1;
int arr2[q];

int top3 = -1;
int arr3[q];

void push1000(int *arr, int *top, int *x) {
	if (*top == q - 1) {
		printf("\nOverflow!!");
	} else {
		*top = *top + 1;
		arr[*top] = *x;
	}
}

void bubble(int *array, int size) {
	for (int step = 0; step < size; ++step) {
		for (int i = 0; i < size - step; ++i) {
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}

void show1000(int arr[], int top) {
	bubble(arr, top);
	if (top == -1) {
		printf("\nUnderflow!!");
	} else {
		printf("\nElements:\n");
		for (int i = top; i >= 0; --i) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
}

int main() {
	srand(time(NULL));
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int x = rand() % 80 + 10;
		push1000(arr1, &top1, &x);
	}

	for (int i = 0; i < n; i++) {
		int x = rand() % 80 + 10;
		push1000(arr2, &top2, &x);
	}
	show1000(arr1, top1);
	show1000(arr2, top2);

	for (int i = 0; i <= top1; i++) {
		push1000(arr3, &top3, arr1 + i);
		push1000(arr3, &top3, arr2 + i);
	}

	show1000(arr3, top3);

	//pop
	top1 = -1;
	top2 = -1;
	top3 = -1;
}
