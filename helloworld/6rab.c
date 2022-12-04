#include <stdio.h>
#include <string.h>

/* lab 6 */
long fibonachi(long)
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
  


}
long fibonachi(long n)