#include <stdio.h>
#include <string.h>

/* lab 4.29.3 */

void swapStr(char **ptr1, char **ptr2) {
}

int main() {
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

 for (int i = 0; i <= k; i++) {
  for (int j = 0; j <= k - i; j++) {
    if (strlen(arr[j]) < strlen(arr[j+1])) {
	      for (int sus = 0; sus <= 50; sus++) {
          int temp = arr[j][sus];
          arr[j][sus] = arr[j+1][sus];
          arr[j+1][sus] = temp;
        }
    }
  }
 }

	  for (int j = 0; j < strlen(arr[k-1]); j++) {
		  printf("%c", arr[k-1][j]);
	  }
}