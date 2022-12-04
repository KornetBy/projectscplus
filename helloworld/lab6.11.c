#include <stdio.h>
#include <string.h>
#include <locale.h>

int factorial(int count)
{
	int q = 1;
	for (int i=1;i<=count;i++)
        q=q*i;
    return q;
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
		if (str[i] == '_') {
			j = 0;
			k++;
		}
	}
	int w = factorial(k);
	int sus[k];
	for ( int i = 0; i < k; i++)
	{
		sus[i] = i;
	}
	
	 int edge, i, tmp;
        edge = w - 1;
 
        // find j in (k…n-1) where a[j] > a[edge]
        j = w;
        while ( (j < k) && (sus[edge] >= sus[j]) ) ++j;
 
        if (j < k)
        {
                // swap a[egde], a[j]
                tmp = sus[edge], sus[edge] = sus[j], sus[j] = tmp;
        }
        else
        {
                // reverse a[k] to a[n-1]
                for (i = w, j=k-1;  i<j;  i++, j--)
                {
                        tmp = sus[i], sus[i] = sus[j], sus[j] = tmp;
                }
 
                // find rightmost ascent to left of edge
                i = edge - 1;
                while (i >= 0 && sus[i] >= sus[i+1]) --i;
 
                if (i < 0) return 0;           // no more permutations
 
                // find j in (n-1…i+1) where aj > ai
                j = k - 1;
                while (j > i && sus[i] >= sus[j]) --j;
 
                // swap a[i], a[j]
                tmp = sus[i], sus[i] = sus[j], sus[j] = tmp;
 
                // reverse a[i+1] to an-1
                for (i = i+1, j=k-1;  i<j;  i++, j--)
                {
                        tmp = sus[i], sus[i] = sus[j], sus[j] = tmp;
                }
        }
	
}

