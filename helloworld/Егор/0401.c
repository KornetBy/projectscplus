

#include <stdio.h>
#include <string.h>

int main() {
	char str[255];
	printf("Enter the string: ");
	scanf("%[^\n]s", str);

	int k = 0;
	int j = 1;
	int len = strlen(str);
	char arr[255][255];

	for (int i = 0; i < len; i++) {
		arr[k][j] = str[i];
		j++;
		if (str[i] == ' ') {
			arr[k][0] = j;
			j = 1;
			k++;
		}
	}

	int max = 0;
	int index = 0;

	for (int i = 0; i <= k; i++) {
		if (strlen(arr[i]) > max) {
			max = strlen(arr[i]);
			index = i;
		}
	}

	for (int i = 1; i < arr[index][0]; i++) {
		printf("%c", arr[index][i]);
	}
}
