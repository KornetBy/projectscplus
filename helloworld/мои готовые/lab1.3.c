#include <stdio.h>

/* lab 1.17 */

int main()
{
  float sum=0;
  for(float i=1; i<= 50; i++)
  {
    sum = sum + 1/(i*i*i);
  }
  printf("Итоговая сумма: %f", sum);
}