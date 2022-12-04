#include "Lab0301.h"

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void launchLab0301() {
	int n = 5;
	int matr1[n][n];
	int min;

	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matr1[i][j] = rand() % 10 + 10;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", matr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	min = 100;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i > j && i > n - 1 - j && i > (n - 1) / 2) || (i < j && i < n - 1 - j && i < (n - 1) / 2)) {
				printf("%d ", matr1[i][j]);
			} else {
				printf("00 ");
			}
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i > j && i > n - 1 - j && i > (n - 1) / 2) || (i < j && i < n - 1 - j && i < (n - 1) / 2)) {
				if (matr1[i][j] < min) {
					min = matr1[i][j];
				}
			}
		}
	}

	printf("%d \n", min);
}
