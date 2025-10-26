#include <iostream>

using namespace std;

int count(char *s, char c) {
  int counter = 0;
  for (int i = 0; s[i] != '\0'; ++i) {
    if (s[i] == c) {
      ++counter;
    }
  }
  return counter;
}

void read(char *s, int maxLen) {
  cout << "Введіть рядок: ";
  cin.getline(s, maxLen);
}

int main() {
  const int MAX_LEN = 256;
  char s[MAX_LEN];

  read(s, MAX_LEN);

  char c;
  cout << "Введіть символ для підрахунку: ";
  cin >> c;

  int result = count(s, c);
  cout << "Кількість входжень символу '" << c << "': " << result << endl;

  return 0;
}
