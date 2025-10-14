// Введіть з клавіатури чотири дійсних числа, визначте
// найбільше з них, перевірте чи більше це число за 500 чи не більше.
#include <stdio.h>
#include <stdlib.h>

int main() {
  float a, b, c, d, max;

  puts("Input value a, b, c, d:");
  scanf("%f %f %f %f", &a, &b, &c, &d);

  if (a > b && a > c && a > d)
    max = a;
  else if (b > a && b > c && b > d)
    max = b;
  else if (c > a && c > b && c > d)
    max = c;
  else
    max = d;

  if (max > 500)
    printf("max=%f and its gt 500\n", max);
  else
    printf("max=%f and its lt 500\n", max);

  return 0;
}
