#include <iostream>
#include <string.h>
using namespace std;


void swap(int *a, int i, int j)
{
  int s = a[i];
  a[i] = a[j];
  a[j] = s;
}
bool NextSet(int *a, int n, int m)
{
  int j;
  do  // повторяем пока не будет найдено следующее размещение
  {
    j = n - 1;
    while (j != -1 && a[j] >= a[j + 1]) j--;
    if (j == -1)
      return false; // больше размещений нет
    int k = n - 1;
    while (a[j] >= a[k]) k--;
    swap(a, j, k);
    int l = j + 1, r = n - 1; // сортируем оставшуюся часть последовательности
    while (l < r)
      swap(a, l++, r--);
  } while (j > m - 1);
  return true;
}

int main() 
{
  char str[255];
	printf("Enter the string: ");
	gets(str);

	int k = 0;
	int j = 0;
	int len = strlen(str);
	char arr[255][255];

	for (int i = 0; i < len; i++) {
		arr[k][j] = str[i];
		j++;
		if (str[i] == '_') {
			j = 0;
			k++;
		}
	}
  int n, m, *a;
  n = k;
  m = k;
  a = new int[n];
  for (int i = 0; i < n; i++)
    a[i] = i + 1;
     

  static int num = 1; // номер размещения
  cout.width(3); // ширина поля вывода номера размещения
  cout << num++ << ":  ";
  for (int i = 0; i < n; i++)
    cout << arr[a[i]-1] << "";
  cout << endl;

  while (NextSet(a, n, m))
  { static int num = 2; // номер размещения
    cout.width(3); // ширина поля вывода номера размещения
    cout << num++ << ":  ";
    for (int i = 0; i < m; i++)
      cout << arr[a[i]-1] << "";
    cout << endl;}
  cin.get(); cin.get();
  return 0;
}