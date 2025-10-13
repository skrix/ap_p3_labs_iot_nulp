#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
  int i, j, N;

  printf("Input the size of the square matrix: ");
  scanf("%d", &N);

  /* Перевірка коректності розміру */
  if (N <= 0)
  {
    printf("Error: size must be positive\n");
    return -1;
  }

  /* Перша матриця - вказівник на масив вказівників */
  int **matr;
  matr = (int **)malloc(N * sizeof(int *));
  if (matr == NULL)
  {
    printf("Error: memory allocation failed for matr\n");
    return -1;
  }

  for (i = 0; i < N; i++)
  {
    matr[i] = (int *)malloc(N * sizeof(int));
    if (matr[i] == NULL)
    {
      printf("Error: memory allocation failed for matr[%d]\n", i);
      return -2;
    }
  }

  /* Друга матриця */
  int **mas;
  mas = (int **)malloc(N * sizeof(int *));
  if (mas == NULL)
  {
    printf("Error: memory allocation failed for mas\n");
    return -1;
  }

  for (i = 0; i < N; i++)
  {
    mas[i] = (int *)malloc(N * sizeof(int));
    if (mas[i] == NULL)
    {
      printf("Error: memory allocation failed for mas[%d]\n", i);
      return -2;
    }
  }

  /* Третя матриця (результуюча) */
  int **result;
  result = (int **)malloc(N * sizeof(int *));
  if (result == NULL)
  {
    printf("Error: memory allocation failed for result\n");
    return -1;
  }

  for (i = 0; i < N; i++)
  {
    result[i] = (int *)malloc(N * sizeof(int));
    if (result[i] == NULL)
    {
      printf("Error: memory allocation failed for result[%d]\n", i);
      return -2;
    }
  }

  /* Ініціалізація генератора випадкових чисел */
  srand((unsigned)time(NULL));

  /* Заповнення першої матриці випадковими числами від -100 до +100 */
  printf("\n\tMatrix matr (random from -100 to +100):\n");
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      matr[i][j] = rand() % 201 - 100; /* діапазон [-100, 100] */
      printf("%8d", matr[i][j]);
    }
    printf("\n");
  }

  /* Заповнення другої матриці */
  printf("\n\tMatrix mas:\n");
  printf("Input the elements of the matrix mas:\n");
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      scanf("%d", &mas[i][j]);
    }
  }

  /* Виведення другої матриці */
  printf("\n\tMatrix mas:\n");
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      printf("%8d", mas[i][j]);
    }
    printf("\n");
  }

  /* Обчислення третьої матриці - сума абсолютних значень */
  printf("\n\tMatrix result (sum of absolute values):\n");
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      result[i][j] = abs(matr[i][j]) + abs(mas[i][j]);
      printf("%8d", result[i][j]);
    }
    printf("\n");
  }

  /* Звільнення пам'яті */
  for (i = 0; i < N; i++)
  {
    free(matr[i]);
    free(mas[i]);
    free(result[i]);
  }
  free(matr);
  free(mas);
  free(result);

  printf("\nMemory freed successfully.\n");
  return 0;
}
