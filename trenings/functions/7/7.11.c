#include<stdio.h>
void printCharacters(const char *);

int main(){
  char string[]= "print characters of a string";
  printf("The string is:\n");
  printCharacters(string);
  putchar('\n');
  return 0;
}

void printCharacters(const char *s){
  while(*s !='\0'){
    putchar(*s);
    s++;
  }
}