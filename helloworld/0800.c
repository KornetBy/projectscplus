#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
	int value;
	struct Node *next;
};

void push(struct Node **head, int data) {
	struct Node *tmp = (struct Node*) malloc(sizeof(struct Node));
	(*tmp).value = data;
	(*tmp).next = (*head);
    (*head) = tmp;
}

void printLinkedList(struct Node *head) {
    while (head) {
        printf("%d ", (*head).value);
        head = (*head).next;
    }
    printf("\n");
}

void printLinkedListNotice1(struct Node *head) {
    while (head) {
    	if ((*head).value < 0) {
            printf("%d ", (*head).value);
            head = (*head).next;
        } else {
            head = (*head).next; 
        }
    }
    printf("\n");
}

void printLinkedListNotice2(struct Node *head) {
    while (head) {
    	if ((*head).value >= 0) {
            printf("%d ", (*head).value);
            head = (*head).next;
        } else {
            head = (*head).next; 
        }
    }
    printf("\n");
}

int main() {
	srand(time(NULL));

	struct Node *head1 = NULL;
	for (int i = 0; i < 11; i++) {
		int sus = rand()%10-5;
		push(&head1, sus);
	}

    printLinkedList(head1);
    printLinkedListNotice1(head1);
    printLinkedListNotice2(head1);

	printf("\n");
}
