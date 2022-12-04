#include "Lab0202.h"

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void launchLab0202() {
	int matr[6][6];
	int sum = 0;

	srand(time(NULL));

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			matr[i][j] = rand() % 3 + rand() % 3;
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d ", matr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 6; i++) {
		sum += matr[i][i];
	}

	for (int i = 0; i < 6; i++) {
		sum += matr[i][6 - i - 1];
	}
	printf("\n%d\n", sum);
}
