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




  int temp = mas[1][0];
  int k;
  for(int i = 1; i <= n/2; i++)
  {
    for(int j = 0, k = n-1; j < i; j++,k)
    {
      if(mas[i][j] < temp)
       temp = mas[i][j];
      else 
        mas[i][j]=0;
      if(mas[i][k] < temp)
       temp = mas[i][k];
       else 
        mas[i][j]=0;
    }  
  }

  for(int i = n-2; i > n/2; i--)
  {
    for(int j = 0, k = n-1; j < n-i-1; j++,k)
    {
      if(mas[i][j] < temp)
       temp = mas[i][j];
       else 
        mas[i][j]=0;
       if(mas[i][j] < temp)
       temp = mas[i][k];
       else 
        mas[i][j]=0;
    }  
  }

printf("\n");  
for(int i=0; i<n;i++)
  {
    for(int j=0; j<n; j++)
    {
      printf("%3d ",mas[i][j]);
    }
    printf("\n");
  }

  printf("Наименьшее значение элемента в заданной области: %d \n",temp);
 
  
}