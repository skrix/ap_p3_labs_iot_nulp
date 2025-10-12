#include <stdio.h>
#include <string.h>

#define K 80

int main()
{
  char str1[K], str2[K], result[K * 2]; // резервування пам'яті для рядків
  int len1, len2, lenResult;

  // Введення першого рядка
  puts("Введіть рядок з кількома словами:");
  fgets(str1, K, stdin); // безпечніше, ніж gets()

  // Видаляємо символ нового рядка, якщо він є
  str1[strcspn(str1, "\n")] = '\0';

  // Підрахунок символів у першому рядку
  len1 = strlen(str1);
  printf("\nПерший рядок: %s\n", str1);
  printf("Кількість символів у першому рядку: %d\n", len1);

  // Визначення другого рядка з заданим повідомленням
  strcpy(str2, " з'явилася в бібліотеці");

  // Підрахунок символів у другому рядку
  len2 = strlen(str2);
  printf("\nДругий рядок (повідомлення): %s\n", str2);
  printf("Кількість символів у другому рядку: %d\n", len2);

  // Об'єднання рядків
  strcpy(result, str1);
  strcat(result, str2);

  // Підрахунок символів у результуючому рядку
  lenResult = strlen(result);

  // Виведення результату
  printf("\n=== РЕЗУЛЬТАТ ===\n");
  printf("Сумарний рядок: %s\n", result);
  printf("Кількість символів у сумарному рядку: %d\n", lenResult);

  return 0;
}
