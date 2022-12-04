#include "Lab0117.h"

#include <math.h>
#include <stdio.h>

void launchLab0117() {
	double sum = 0;
	int k;
	for (k = 1; k <= 50; k++) {
		sum += 1.0 / pow(k, 3);
	}
	printf("The sum is: %f.\n", sum);
}
