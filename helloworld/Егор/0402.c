

#include <stdio.h>
#include <string.h>

int main() {
	char str[255];
	printf("Enter the string: ");
	scanf("%[^\n]s", str);

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

	for (int l = k; l >= 0; l--) {
		printf("%s", arr[l]);
	}
	printf("\n");
}
