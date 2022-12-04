#include <stdio.h>
#include <string.h>
/* lab 4.29.2 */

int main()
{
  char str[255];
  printf("Введите предложение: ");
  gets(str);
  int len = strlen(str);
  int bool = 0; //при 0 нет в слове, при встр
  int count = 0;
  for(int i = 0; i< len; i++)
  {
    if (bool == 0){
      if(str[i] == 'A'){ 
      count++;
      bool = 1;
      }
    }
    if(str[i] == ' ')
      bool = 0;
  }
  printf("Буква 'А' встречается в %d словах", count);

}