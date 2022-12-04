#include "Lab0402.h"

#include <stdio.h>
#include <string.h>

void launchLab0402() {
	char str[255];
	printf("Enter the string: ");
	gets(str);

	int k = 0;
	int j = 0;
	int len = strlen(str);
	char arr[255][255];

	for (int i = 0; i < len; i++) {
		arr[k][j] = str[i];
		j++;
		if (str[i] == ' ') {
			j = 0;
			k++;
		}
	}

	for (int i = k - 1; i >= 0; i--) {
		printf("%s", arr[i]);
	}
	printf("\n");
}
