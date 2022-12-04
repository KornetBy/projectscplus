#include <stdio.h>

int countLines(FILE *f1) {
	char ch;
	int quantity = 1;
	do {
		ch = fgetc(f1);
		if (ch == '\n') {
			quantity++;
		}
	} while (ch != EOF);
	rewind(f1);
	return quantity;
}

int main() {
	char arr[255][255];
	FILE *f1 = fopen("FAMIL1.txt", "r");
	FILE *f3 = fopen("FAMIL2.txt", "w+");

	int q1 = countLines(f1);

	int c = 0;
	for (int i = 0; i < q1; i++) {
		fgets(arr[c], sizeof(arr[c]), f1);
		c++;
	}

	for (int i = 0; i < c - 1; i++) {
		for (int j = 0; j < c - 1 - i; j++) {
			if (arr[j][0] > arr[j + 1][0]) {
				for (int k = 0; k < 255; k++) {
					char temp = arr[j][k];
					arr[j][k] = arr[j+1][k];
					arr[j+1][k] = temp;
				}
			}
		}
	}

	for (int i = 0; i < c; i++) {
		if (arr[i][0] == arr[c-1][0]) {
			printf("%s\n", arr[i]);
		}
	}
	
	for (int i = 0; i < c; i++) {
		if (arr[i][0] == arr[c-1][0]) {
			fprintf(f3, "%s\n", arr[i]);
		}
	}
	
	return 0;
}
