#include "Lab0110.h"

#include <math.h>
#include <stdio.h>

void launchLab0110() {
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	int res = pow(2, n);
	printf("The power is: %d.\n", res);
}
