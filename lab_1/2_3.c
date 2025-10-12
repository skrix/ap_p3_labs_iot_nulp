// Розробіть програму з використанням оператору switch(),
// яка згідно з введеною з клавіатури першої букви виводить
// на екран задану повну назви або повідомлення про помилку,
// якщо введена буква не співпадає з заданими.

// Назви 6 дерев.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  char s;
  fflush(stdin);

  s = getchar();
  s = tolower(s);

  switch (s)
  {
  case 'o':
    printf("Tree: Oak\n");
    break;
  case 'm':
    printf("Tree: Maple\n");
    break;
  case 'p':
    printf("Tree: Pine\n");
    break;
  case 's':
    printf("Tree: Spruce\n");
    break;
  default:
    printf("Error: the entered letter does not match the given trees!\n");
    break;
  }

  return 0;
}
