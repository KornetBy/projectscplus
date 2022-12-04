#include "Lab0401.h"

#include <stdio.h>
#include <string.h>

void launchLab0401() {
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

	int max = strlen(arr[0]);
	int index = 0;

	for (int i = 0; i < k; i++) {
		if (strlen(arr[i]) > max) {
			max = strlen(arr[i]);
			index = i;
		}
	}

	printf("%s\n", arr[index]);
}
