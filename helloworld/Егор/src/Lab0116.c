#include "Lab0116.h"

#include <math.h>
#include <stdio.h>

void launchLab0116() {
	double sum = 0;
	int k;
	for (k = 1; k <= 100; k++) {
		sum += 1.0 / pow(k, 2);
	}
	printf("The sum is: %f.\n", sum);
}
