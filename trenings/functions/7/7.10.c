#include<stdio.h>

void covertToUppercase(char *);

int main()
{
  char string[]= "characters";
  printf("The string before conversion is: %s\n", string);
  covertToUppercase(string);
  printf("The string after conversinon is: %s\n", string);
}

void covertToUppercase(char *s){
  while(*s !='\0'){
    if (*s >= 'a' && *s <= 'z')
      *s -=32;
    ++s; 
  }
}