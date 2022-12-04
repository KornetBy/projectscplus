#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Info {
	int quant;
	char surname[255];
	int year;
	int number;
};

struct Info list[255];
int q = 5;

void refresh0900() {
	FILE *file = fopen("List.txt", "w+");
	for (int i = 0; i < q; i++) {
		if (list[i].quant != 0) {
			fprintf(file, "%d. %s %d %d\n", list[i].quant, list[i].surname, list[i].year, list[i].number);
		}
	}
	fclose(file);
}

void remove0900() {
	int num;
	int index;
	printf("Enter the number to remove: ");
	scanf("%d", &num);

	for (int i = 0; i < q; i++) {
		if (num == list[i].quant) {
			index = i;
			break;
		}
	}
	list[index].quant = 0;
	printf("Removed succesfully.\n");
}

void show0900() {
	for (int i = 0; i < q; i++) {
		if (list[i].quant != 0) {
			printf("%d. %s %d %d\n", list[i].quant, list[i].surname, list[i].year, list[i].number);
		}
	}
}

void edit0900() {
	int num;
	int index;
	printf("Enter the number to edit: ");
	scanf("%d", &num);

	for (int i = 0; i < q; i++) {
		if (num == list[i].quant) {
			index = i;
			break;
		}
	}

	printf("Enter abonent num to save:\n");
	scanf("%d", &list[index].number);
	printf("Edited succesfully.\n");
}

void add0900() {
	q++;
	list[q - 1].quant = q;

	char surname[255];
	printf("Enter the surname to add:\n");
	scanf("%s", surname);
	strcpy(list[q - 1].surname, surname);

	int year;
	printf("Enter the year to add: ");
	scanf("%d", &year);
	list[q - 1].year = year;

	printf("Enter abonent num to save:\n");
	scanf("%d", &list[q - 1].number);
	printf("Added succesfully.\n");
}

int main() {
	srand(time(NULL));
	list[0].quant = 1;
	list[0].year = 1801;
	strcpy(list[0].surname, "Alexandrov");
	list[0].number = rand() % 10000 + 55000;
	list[1].quant = 2;
	list[1].year = 2009;
	strcpy(list[1].surname, "Deboshirov");
	list[1].number = rand() % 10000 + 55000;
	list[2].quant = 3;
	list[2].year = 2010;
	strcpy(list[2].surname, "Asus");
	list[2].number = rand() % 10000 + 55000;
	list[3].quant = 4;
	list[3].year = 2011;
	strcpy(list[3].surname, "Submarina");
	list[3].number = rand() % 10000 + 55000;
	list[4].quant = 5;
	list[4].year = 2012;
	strcpy(list[4].surname, "Sueta");
	list[4].number = rand() % 10000 + 55000;

	show0900();
	printf("Enter the option: add/edit/remove/show\n");
	char doing[255];
	for (;;) {
		scanf("%s", doing);
		fflush(stdin);
		if (strcmp(doing, "add") == 0) {
			add0900();
			refresh0900();
			continue;
		} else if (strcmp(doing, "edit") == 0) {
			edit0900();
			refresh0900();
			continue;
		} else if (strcmp(doing, "remove") == 0) {
			remove0900();
			refresh0900();
			continue;
		} else if (strcmp(doing, "show") == 0) {
			show0900();
			refresh0900();
			continue;
		} else if (strcmp(doing, "exit") == 0) {
			break;
		}
	}
}