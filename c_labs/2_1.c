// Перевірте, чи ділиться на 5 введене з клавіатури ціле число.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  puts("Input number:");

  scanf("%d", &n);

  if (n % 5 == 0)
    printf("number %d multiple of 5\n", n);
  else
    printf("number %d is not multiple of 5\n\n", n);

  system("pause");
  return 0;
}
