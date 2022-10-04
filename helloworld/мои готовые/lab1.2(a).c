#include <stdio.h>

/* lab 1.18(a) */

int main()
{
  int n;
  printf("Введите число n: ");
  scanf("%d", &n );
  float sum = 0;
  for(float i= 1; i<=n;i++)
  {
    sum = sum + 1/i;
  }
  printf("Сумма равна: %.13f", sum);
}