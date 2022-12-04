#include<stdio.h>

int main(){
  int a;
  int *aPtr;
  a = 7;
  aPtr = &a;
  printf("The address of a is %p\n"
         "The value of aPtr is %p \n\n", &a, aPtr);
  printf("The value of a is %d\n"
         "The value of *aPtr is %d\n\n", a, *aPtr);
  printf("Proving that * and & are complements of each other.\n""\n &*aPtr = %p \n *&aPtr = %p\n", &*aPtr, *&aPtr);
}