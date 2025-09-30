// Розробіть програму, в якій вводиться з клавіатури
// ціле число та на екран виводиться відповідне повідомлення
// або повідомлення про помилку, якщо введене число не співпадає
// з заданими (кожне з повідомлень може бути позначене кількома мітками).

// Введіть номер місяця та виведіть відповідний номер кварталу.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  puts("Input number from 1 to 12, month of the year:");
  scanf("%d", &a);
  switch (a)
  {
  case 1:
  case 2:
  case 3:
    puts("First");
    break;
  case 4:
  case 5:
  case 6:
    puts("Second");
    break;
  case 7:
  case 8:
  case 9:
    puts("Third");
    break;
  case 10:
  case 11:
  case 12:
    puts("Fourth");
    break;
  default:
    puts("Error! Value from 1 to 7");
  }

  return 0;
}
