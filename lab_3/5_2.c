#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  const int N = 5;
  const int M = 4;
  float A[N][M];

  srand((unsigned)time(NULL)); // Запуск генератора випадкових чисел
  int i, j;
  int count = 0; // Лічильник від'ємних чисел

  // Заповнення масиву випадковими числами від -50.50 до 20.50
  printf("Array A[%d][%d]:\n", N, M);
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      // Генерація випадкового числа в діапазоні [-50.50, 20.50]
      *(*(A + i) + j) = (rand() % 7101) * 0.01f - 50.50f;
      printf("%8.2f", *(A[i] + j));
    }
    printf("\n");
  }

  // Спосіб 1: Звичайна індексація A[i][j]
  count = 0;
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      if (A[i][j] < 0)
        count++;
    }
  }
  printf("Method 1 (A[i][j]): number of negative numbers = %d\n", count);

  // Спосіб 2: Використання вказівників *(A[i] + j)
  count = 0;
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      if (*(A[i] + j) < 0)
        count++;
    }
  }
  printf("Method 2 (*(A[i] + j)): number of negative numbers = %d\n", count);

  // Додатково: Виведення списку від'ємних чисел
  printf("\nNegative numbers in array:\n");
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      if (A[i][j] < 0)
        printf("A[%d][%d] = %7.2f\n", i, j, A[i][j]);
    }
  }

  return 0;
}
