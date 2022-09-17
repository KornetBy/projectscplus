#include <stdio.h>
#include <stdlib.h>
/* lab 2.1.14 (без номера 2) */

int main()
{ 
  int n;
  int bool=1;
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
  srand(42);
  printf("\n");
  int mas[n][n];
  for(int i = 0; i< n; i++)
  {
    for(int j = 0; j< n; j++)
    {
      printf("Элемент массива mas[%d][%d]: ", i+1, j+1);
      // scanf("%d",&mas[i][j]);
      
      int r=rand();
      mas[i][j]= r%100;
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

  int tmp = mas[0][0];
  for(int i = 0; i<n; i++)
  {
    if(mas[i][i] > tmp)
      tmp = mas[i][i];
  }
  for( int j = n-1; j >= 0;j--)
  {
    if(mas[j][j] > tmp)
      tmp = mas[j][j];
  }
  int p=n / 2;
  mas[p][p]=tmp;
  printf("Наибольший элемент на главной и побочной диагоналях равен: %d \n", tmp);
  printf("Итоговый массив выглядит следующим образом: \n");
  for(int i=0; i<n;i++)
  {
    for(int j=0; j<n; j++)
    {
      printf("%3d ",mas[i][j]);
    }
    printf("\n");
  }

}