#include <stdio.h>

/* lab 1.16 */

int main()
{ 
  float i;
  float sum = 0;
  for(i = 1; i<=100; i++)
  {
    sum = sum + 1/(i * i); 
  }
  printf("%.13e", sum);
}