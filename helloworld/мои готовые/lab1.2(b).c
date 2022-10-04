#include <stdio.h>

/* lab 1.18(б) */

int main()
{
  int n;
  printf("Введите n: ");
  scanf("%d", &n);
  float sum;
  for(float i = 1; i<=n; i++)
  {
    sum = sum + 1/((2*i + 1)*(2*i + 1));
  }
  printf("Итоговая сумма: %f", sum);
}