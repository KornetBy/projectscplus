#include<stdio.h>
#define SIZE 10

void bubbleSort(int *, int);
void swap(int *, int*);

int main(){
  int i, a[SIZE]= {2,6,4,8,10,12,89,68,45,37};

  printf("Data items in original order \n");

  for(i = 0; i<= SIZE-1; i++)
    printf("%4d", a[i]);
    bubbleSort(a, SIZE);
    printf("\n Data items in ascending order \n");
    for(i = 0; i<= SIZE -1; i++)
      printf("%4d", a[i]);
    printf("\n");
}

void bubbleSort(int *array, int size){
  int pass, j;
  for(pass = 0; pass<=size -1; pass++)
    for (j=0; j<= size - 2- pass; j++)
      if(array[j] > array[j+1])
        swap(&array[j], &array[j + 1]);
  
}

void swap(int *element1Ptr, int *element2Ptr){
  int temp;
  temp = *element1Ptr;
  *element1Ptr = *element2Ptr;
  *element2Ptr = temp;
}