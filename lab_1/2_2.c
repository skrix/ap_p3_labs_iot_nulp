// Введіть з клавіатури ціле число, якщо воно додатне,
// перевірте, чи кратне 5, інакше – чи менше воно за -100.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int x;

  puts("Input value:");
  scanf("%d", &x);

  if (x > 0) {
    if (x % 5 == 0) {
      printf("number %d multiple of 5\n", x);
    } else {
      printf("number %d is not multiple of 5\n\n", x);
    }
  }

  if (x < -100) {
    printf("Value %.2d <=0 and <-100\n", x);
  } else {
    printf("Value %.2d <=0 and >=-100\n", x);
  }

  return 0;
}
