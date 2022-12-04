#include "Lab0201.h"

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void launchLab0201() {
	int matr1[6][6];
	int matr2[6][6];

	srand(time(NULL));

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			matr1[i][j] = rand() % 10 + 10;
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			matr2[i][j] = 0;
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d ", matr1[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {
				for (int l = 0; l < 6; l++) {
					if (matr1[i][j] == matr1[k][l] && i != k && j != l) {
						matr2[i][j] = 1;
					}
				}
			}
		}
	}

	printf("\n");

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d ", matr2[i][j]);
		}
		printf("\n");
	}
}
