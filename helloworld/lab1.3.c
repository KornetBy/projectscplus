#include <stdio.h>

/* lab 1.2 */

int main()
{
  int x, y;
  printf(" Введите 2 числа: \n x = ");
  scanf("%d", &x);
  printf(" y = ");
  scanf("%d", &y);
  if( x > y )
    printf(" Первое число %d больше второго", x);
  else
    printf(" Первое число не больше второго: %d, %d ", x, y);
}