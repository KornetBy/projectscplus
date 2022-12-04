#include<stdio.h>

int square(int);

int main(){
  int x;
  for(int x = 1; x<=50; x++)
    printf("%d   ", square(x));
    printf("\n");
}

int square(int y){
  return y*y;
}