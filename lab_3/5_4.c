#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int n, i;
  double *ptr; /* вказівник на масив чисел типу double */

  /* Ініціалізація генератора випадкових чисел */
  srand(time(NULL));

  printf("Input size array: ");
  scanf("%d", &n);

  /* Перевірка коректності розміру */
  if (n <= 0)
  {
    printf("Error: size must be positive\n");
    return -1;
  }

  /* Запит пам'яті */
  ptr = (double *)malloc(n * sizeof(double));

  /* Перевірка виділення пам'яті */
  if (ptr == NULL)
  {
    printf("Error: memory allocation failed\n");
    return -1;
  }

  /* Заповнення масиву випадковими числами від -15000 до 15000 */
  printf("\nGenerating random array...\n");
  for (i = 0; i < n; i++)
  {
    /* Генерація випадкового числа в діапазоні [-15000, 15000] */
    ptr[i] = ((double)rand() / RAND_MAX) * 30000.0 - 15000.0;
  }

  /* Виведення масиву */
  printf("\nArray:\n");
  for (i = 0; i < n; i++)
  {
    printf("%.3f ", ptr[i]);
  }
  printf("\n");

  /* Звільнення пам'яті */
  free(ptr);

  printf("\nMemory freed successfully.\n");

  return 0;
}
