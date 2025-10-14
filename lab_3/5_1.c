#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[4][5];
  int product[5]; // Масив для зберігання добутків по стовпцях
  int i, j;

  // Введення масиву з клавіатури
  printf("Enter array elements 4x5:\n");
  for (i = 0; i < 4; i++)
  {
    printf("Row %d:\n", i + 1);
    for (j = 0; j < 5; j++)
    {
      printf("  arr[%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  // Виведення масиву на екран
  printf("\nArray arr[4][5]:\n");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 5; j++)
      printf("%5d", arr[i][j]);
    printf("\n");
  }

  // Обчислення добутку елементів від 1 до 5 в кожному стовпці
  printf("\nProduct of elements in range from 1 to 5 by columns:\n");

  for (j = 0; j < 5; j++)
  {
    product[j] = 1; // Ініціалізація добутку для кожного стовпця

    for (i = 0; i < 4; i++)
    {
      // Перевірка, чи елемент входить в діапазон [1, 5]
      if (arr[i][j] >= 1 && arr[i][j] <= 5)
      {
        product[j] *= arr[i][j];
      }
    }

    printf("Column %d: product = %d\n", j, product[j]);
  }

  return 0;
}
