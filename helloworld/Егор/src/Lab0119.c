#include "Lab0119.h"

#include <math.h>
#include <stdio.h>

void launchLab0119() {
	int n;
	double sum;
	printf("Enter the number of iterations: ");
	scanf("%d", &n);

	sum = 0;
	for (int k = 1; k <= n; k++) {
		sum += 1.0 / pow(k, 5);
	}
	printf("a) The sum is: %f.\n", sum);

	sum = 0;
	for (int k = 1; k <= n; k++) {
		sum += pow(-1.0, k) / ((2 * k + 1) * k);
	}
	printf("b) The sum is: %f.\n", sum);
}
