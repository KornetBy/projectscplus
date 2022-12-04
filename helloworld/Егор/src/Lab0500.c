#include "Lab0500.h"

#include <stdio.h>

struct student {
	int group;
	char *surname;
	int mark;
};

void swapInt(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapStr(char **ptr1, char **ptr2) {
	char *temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void launchLab0500() {
	struct student students[4];
	students[0].group = 1;
	students[0].surname = "Petrov";
	students[0].mark = 3;
	students[1].group = 2;
	students[1].surname = "Alexeev";
	students[1].mark = 8;
	students[2].group = 1;
	students[2].surname = "Boshirov";
	students[2].mark = 7;
	students[3].group = 2;
	students[3].surname = "Ivanov";
	students[3].mark = 10;

	int n = 4;

	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (students[j].mark < students[j + 1].mark) {
				swapInt(&students[j].group, &students[j + 1].group);
				swapStr(&students[j].surname, &students[j + 1].surname);
				swapInt(&students[j].mark, &students[j + 1].mark);
			}
		}
	}

	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (students[j].group > students[j + 1].group) {
				swapInt(&students[j].group, &students[j + 1].group);
				swapStr(&students[j].surname, &students[j + 1].surname);
				swapInt(&students[j].mark, &students[j + 1].mark);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s: %d group, %d mark;\n", students[i].surname, students[i].group, students[i].mark);
	}
}
