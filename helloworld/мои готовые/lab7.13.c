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
	char arr1[255][255];
	char arr2[255][255];
	FILE *f1 = fopen("F1.txt", "r");
	FILE *f2 = fopen("F2.txt", "r");

	int q1 = countLines(f1);
	int q2 = countLines(f2);

	int c1 = 0;
	int c2 = 0;
	for (int i = 0; i < q1; i++) {
		fgets(arr1[c1], sizeof(arr1[c1]), f1);
		c1++;
	}

	for (int i = 0; i < q2; i++) {
		fgets(arr2[c2], sizeof(arr2[c2]), f2);
		c2++;
	}
  fclose(f1);
  fclose(f2);

	FILE *f3 = fopen("F1.txt", "w+");
	FILE *f4 = fopen("F2.txt", "w+");

	for (int i = 0; i < c1; i++) {
		fprintf(f4, "%s", arr1[i]);
	}

	for (int i = 0; i < c2; i++) {
		fprintf(f3, "%s", arr2[i]);
	}
}