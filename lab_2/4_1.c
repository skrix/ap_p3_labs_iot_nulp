#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int main()
{
  int arr[SIZE];
  int sum = 0;
  int i;

  // Введення елементів масиву з клавіатури
  printf("Введіть %d цілих чисел:\n", SIZE);
  for (i = 0; i < SIZE; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  // Виведення елементів масиву
  printf("\nЗначення елементів масиву:\n");
  for (i = 0; i < SIZE; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  // Обчислення суми квадратів від'ємних елементів
  for (i = 0; i < SIZE; i++)
  {
    if (arr[i] < 0)
    {
      sum += arr[i] * arr[i];
    }
  }

  // Виведення результату
  printf("\nСума квадратів від'ємних елементів: %d\n", sum);

  return 0;
}
