#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 14

int main()
{
  int arr[SIZE];
  int i, count = 0;

  // Запуск генератора випадкових чисел
  srand((unsigned)time(NULL));

  // Заповнення масиву випадковими числами від -30 до 30
  printf("Елементи масиву:\n");
  for (i = 0; i < SIZE; i++)
  {
    arr[i] = rand() % 61 - 30; // діапазон від -30 до +30
    printf("arr[%d] = %3d\n", i, arr[i]);
  }

  // Підрахунок кількості непарних чисел
  for (i = 0; i < SIZE; i++)
  {
    if (arr[i] % 2 != 0)
    { // перевірка на непарність
      count++;
    }
  }

  // Виведення результату
  printf("\nКількість непарних чисел: %d\n", count);

  return 0;
}
