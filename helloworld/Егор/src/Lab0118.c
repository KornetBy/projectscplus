#include "Lab0118.h"

#include <math.h>
#include <stdio.h>

void launchLab0118() {
	int n;
	double sum;
	printf("Enter the number of iterations: ");
	scanf("%d", &n);

	sum = 0;
	for (int k = 1; k <= n; k++) {
		sum += 1.0 / k;
	}
	printf("a) The sum is: %f.\n", sum);

	sum = 0;
	for (int k = 1; k <= n; k++) {
		sum += 1.0 / pow((2 * k + 1), 2);
	}
	printf("b) The sum is: %f.\n", sum);
}
