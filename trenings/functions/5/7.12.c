#include<stdio.h>

void f(const int *);

int main(){
  int y= 8;
  f(&y);
}

void f(const int *y){
  printf("%d", *y);
}