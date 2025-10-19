#include <iostream>

using namespace std;

int main() {
  const int SIZE = 5;
  int mas[SIZE];

  // Введення елементів масиву через покажчик-зсув
  cout << "Введіть 5 цілих чисел:\n";
  for (int i = 0; i < SIZE; ++i) {
    cin >> *(mas + i);
  }

  // Виведення масиву
  cout << "Елементи масиву: ";
  for (int i = 0; i < SIZE; ++i) {
    cout << *(mas + i) << " ";
  }
  cout << endl;

  // Пошук максимального елемента і його номера
  int max_value = *mas;
  int max_index = 0;
  for (int i = 1; i < SIZE; ++i) {
    if (*(mas + i) > max_value) {
      max_value = *(mas + i);
      max_index = i;
    }
  }

  cout << "Максимальний елемент: " << max_value << ", номер: " << max_index << endl;

  return 0;
}
