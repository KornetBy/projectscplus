#include "Lab0403.h"

#include <stdio.h>

void launchLab0403() {
	int n;
	printf("Enter the N: ");
	scanf("%d", &n);

	int m;
	printf("Enter the M: ");
	scanf("%d", &m);

	char a[255];
	printf("Enter the string A: ");
	scanf("%s", a);

	char b[255];
	printf("Enter the string B: ");
	scanf("%s", b);

	int realPosM = m - 1;

	for (int i = 0; i < n; i++) {
		a[realPosM + i] = b[i];
	}

	printf("The final string is \"%s\".\n", a);
}
