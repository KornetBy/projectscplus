#include <stdio.h>
#include <math.h>

/* lab 1.14 */

int main (void)
{
  int x;
  printf("Введите число x: ");
  scanf("%d", &x);
  float sum = x;
  float sumpx=1;
  int bool = 1;
  for(int i = 3; i<=13; i+=2)
  {
    int sump = pow(x,i);
    for(int j = i-1; j <= i; j++)
      sumpx = sumpx * j;
    float q = sump/ sumpx; 
    if (bool == 0){
      sum = sum + q;
      bool = 1; 
      printf("%.13f \n", sum);
    }
    else{
      sum = sum - q;
      bool = 0; 
      printf("%.13f \n", sum);
    }

  }
  
printf("Сумма %.13f",sum);
}
  
