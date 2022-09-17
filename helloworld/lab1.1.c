#include <stdio.h>

/* lab 1.7 */

int main (void)
{
  int x;
  printf("Введите число х: ");
  scanf("%d", &x);
  if( x >= -2 && x < 2 )
    x = x*x; 
  else
    x = 4;
  printf(" x = %d", x);  
}
