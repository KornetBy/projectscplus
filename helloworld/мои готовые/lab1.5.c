#include <stdio.h>
#include <math.h>

/* lab 1.19 */

int main()
{
  int n;
  float k, sum1,sum2;
  sum1 = 0;
  sum2 = 0;
  printf("Введите число n: ");
  scanf("%d", &n);
  for(k = 1; k <= n; k++ )
  {
    sum1 = sum1 + 1 / (pow(k, 5));
    sum2 = sum2 + (pow(-1, k))/(pow(2 * k + 1, k));
  }
  printf("Сумма первого выражения: %.10e \n", sum1 );
  printf("Сумма второго выражения: %.10e", sum2 );
}

