#include <stdio.h>

/* lab 1.2 */

int main()
{
  int x, y, z;
  printf("Введите 2 числа: \n x = ");
  scanf("%d", &x);
  printf(" y = ");
  scanf("%d", &y);
  if( x > y )
    z = x - y;
  else  
    z = y - x + 1; 
  printf(" z = %d", z);
}