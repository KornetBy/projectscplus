#include <stdio.h>
#include <stdlib.h>
/* lab 2.1.14 (без номера 1) */

int main()
{ 
  int n;
  printf("Введите размерность матрицы n x n, n = ");
  scanf("%d", &n);
  srand(42);
  printf("\n");
  int mas[n][n];
  int masev[2][n];
  int masnev[2][n];
  for(int i = 0; i< n; i++)
  {
    for(int j = 0; j< n; j++)
    {
      printf("Элемент массива mas[%d][%d]: ", i+1, j+1);
      // scanf("%d",&mas[i][j]);
      
      int r=rand();
      mas[i][j]= r%100;
      printf("%d ", mas[i][j]);
      printf("\n");

    }
  }
  printf("Изначальный массив выглядит следующим образом: \n");
  for(int i=0; i<n;i++)
  {
    for(int j=0; j<n; j++)
    {
      printf("%d   ",mas[i][j]);
    }
    printf("\n");
  }
  
  for(int i=0; i<n;i++)
  {
    int u=0;
    int y=0;
    for(int j=0; j<n; j++)
    {
      if((mas[i][j] % 2) == 0)
      {
        masev[0][u] = j; 
        masev[1][u] = mas[i][j];
        u++;
      }
      else
      {
        masnev[0][y] = j; 
        masnev[1][y] = mas[i][j];
        y++;
      }
    }
    for(int f=0; f<u-1; f++)
    {
      for(int g=0; g<u-f-1;g++)
      {
        if(masev[1][g] < masev[1][g+1])
        {
          int buf = masev[1][g];
          masev[1][g] = masev[1][g+1];
          masev[1][g+1]=buf;
        }
      }
    }
    for(int f=0; f<u;f++)
    {
      mas[i][masev[0][f]]=masev[1][f];
    }
    for(int f=0; f<y-1; f++)
    {
      for(int g=0; g<y-f-1;g++)
      {
        if(masnev[1][g] > masnev[1][g+1])
        {
          int buf = masnev[1][g];
          masnev[1][g] = masnev[1][g+1];
          masnev[1][g+1]=buf;
        }
      }
    } 
    for(int f=0; f<y;f++)
    {
      mas[i][masnev[0][f]]=masnev[1][f];
    }
  }
  printf("Отсортированный массив выглядит следующим образом: \n");
  for(int i=0; i<n;i++)
  {
    for(int j=0; j<n; j++)
    {
      printf("%d  ",mas[i][j]);
    }
    printf("\n");
  }
}

