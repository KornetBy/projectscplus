#include <stdio.h>

struct worker {
  char *surname;
	int number;
  int years;
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

int main() {
	struct worker workers[13];
	workers[0].surname = "Petrov";
	workers[0].number = 3;
  workers[0].years = 7;
	workers[1].surname = "Alexeev";
	workers[1].number = 2;
	workers[1].years = 1;
	workers[2].surname = "Boshirov";
	workers[2].number = 1;
	workers[2].years = 0;
	workers[3].surname = "Konder" ;
	workers[3].number = 2 ;
	workers[3].years = 13;
  workers[4].surname = "Kinder";
	workers[4].number = 1;
	workers[4].years = 17;
  workers[5].surname = "Finder";
	workers[5].number = 1;
	workers[5].years = 16;
  workers[6].surname = "Sergeev";
	workers[6].number = 1;
	workers[6].years = 120;
  workers[7].surname = "Shurgikova";
	workers[7].number = 1;
	workers[7].years = 18;
  workers[8].surname = "Stepan";
	workers[8].number = 1;
	workers[8].years = 19;
	workers[9].surname = "Stepan";
	workers[9].number = 1;
	workers[9].years = 3;
	workers[10].surname = "Filimon";
	workers[10].number = 2;
	workers[10].years = 18;
	workers[11].surname = "Stepan";
	workers[11].number = 2;
	workers[11].years = 42;
	workers[12].surname = "Andreew";
	workers[12].number = 2;
	workers[12].years = 37;



	int n = 13;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (workers[j].years > workers[j + 1].years) {
				swapStr(&workers[j].surname, &workers[j + 1].surname);
				swapInt(&workers[j].number, &workers[j + 1].number);
				swapInt(&workers[j].years, &workers[j + 1].years);
			}
		}
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (workers[j].number > workers[j + 1].number) {
				swapStr(&workers[j].surname, &workers[j + 1].surname);
				swapInt(&workers[j].number, &workers[j + 1].number);
				swapInt(&workers[j].years, &workers[j + 1].years);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s: %d number, %d years;\n", workers[i].surname, workers[i].number, workers[i].years);
	}
}