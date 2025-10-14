#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char string_1[] = "C Programming Language";
  char string_2[] = "Arrays and Pointers Section";
  char string_3[] = "Working with Strings and Characters";

  // Масив вказівників на 3 рядки (книга, розділ, параграф)
  char *book_parts[] = {&string_1, &string_2, &string_3};

  // Виведення рядків на екран
  printf("Book:      %s\n", book_parts[0]);
  printf("Chapter:   %s\n", book_parts[1]);
  printf("Paragraph: %s\n", book_parts[2]);

  // Визначення розмірів
  printf("Size of pointer array: %d bytes\n", sizeof(book_parts));
  printf("Size of string 1: %d bytes\n", sizeof(book_parts[0]));
  printf("Size of string 2: %d bytes\n", sizeof(book_parts[1]));
  printf("Size of string 3: %d bytes\n", sizeof(book_parts[2]));

  // Виведення рядків з їх довжиною
  for (int i = 0; i < 3; i++)
  {
    printf("String %d: %-40s Length: %d\n", i + 1, book_parts[i], strlen(book_parts[i]));
  }

  // Підрахунок кількості літер 'c' у другому рядку (розділ)
  int count_c = 0;
  printf("Second string (chapter): \"%s\"\n\n", string_2);

  // Підрахунок літери 'c' (і малої, і великої)
  for (int i = 0; i < strlen(string_2); i++)
  {
    if (string_2[i] == 'c' || string_2[i] == 'C')
    {
      count_c++;
      printf("Found 'c' at position %d\n", i);
    }
  }

  printf("\nTotal number of 'c' letters in the second string: %d\n", count_c);

  return 0;
}
