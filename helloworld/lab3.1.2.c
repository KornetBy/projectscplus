#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* lab 3.9.1 */
int main()
{
  int n;
  int bool=1;
  srand(time(NULL));
  while (bool == 1)
  {
    printf("Введите размерность матрицы n x n, n = ");
    scanf("%d", &n);
    printf("\n");
    if((n % 2) == 0)
    {
      printf("Повторите попытку. ");
    }
    else 
      bool = 0;
  }
  printf("\n");
  int mas[n][n];
  for(int i = 0; i< n; i++)
  {
    for(int j = 0; j< n; j++)
    {
      printf("Элемент массива mas[%d][%d]: ", i+1, j+1);
      // scanf("%d",&mas[i][j]);
      
      mas[i][j]= rand()%200;
      printf("%3d ", mas[i][j]);
      printf("\n");
    }
  }
  printf("Изначальный массив выглядит следующим образом: \n");
  for(int i=0; i<n;i++)
  {
    for(int j=0; j<n; j++)
    {
      printf("%3d ",mas[i][j]);
    }
    printf("\n");
  }
  int tmp=mas[0][1];
  for(int i = 0; i<(n/2);i++)
  {
    for(int j=1+i; j<n-i-1; j++)
    {
      if(tmp>mas[i][j])
        tmp = mas[i][j];
    }
  }
  printf("Наименьшее значение элемента в заданной области: %d", tmp); 
}