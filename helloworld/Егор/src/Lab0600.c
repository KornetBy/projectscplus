#include "Lab0600.h"

#include <stdio.h>
#include <string.h>

void launchLab0600() {
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
		if (str[i] == '_') {
			j = 0;
			k++;
		}
	}

	for (int l = 0; l < k; l++) {
		if (strcmp(arr[l], "IS_") == 0) {
			continue;
		} else if (strcmp(arr[l], "A_") == 0) {
			continue;
		} else if (strcmp(arr[l], "THIS_") == 0) {
			printf("ETO ");
		} else if (strcmp(arr[l], "TABLE_") == 0) {
			printf("STOL ");
		} else if (strcmp(arr[l], "APPLE_") == 0) {
			printf("JABLOKO ");
		} else if (strcmp(arr[l], "I_") == 0) {
			printf("JA ");
		} else if (strcmp(arr[l], "YOU_") == 0) {
			printf("TY ");
		} else if (strcmp(arr[l], "HE_") == 0) {
			printf("ON ");
		} else if (strcmp(arr[l], "SHE_") == 0) {
			printf("ONA ");
		} else if (strcmp(arr[l], "IT_") == 0) {
			printf("ETO ");
		} else if (strcmp(arr[l], "WE_") == 0) {
			printf("MY ");
		} else if (strcmp(arr[l], "THEY_") == 0) {
			printf("ONI ");
		} else if (strcmp(arr[l], "DEAD_") == 0) {
			printf("MIORTV ");
		} else if (strcmp(arr[l], "INSIDE_") == 0) {
			printf("VNUTRI ");
		} else {
			printf("%s ", arr[l]);
		}
	}
	printf("\n");
}
