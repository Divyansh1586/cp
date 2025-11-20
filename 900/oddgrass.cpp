#include <iostream>
using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    long long x, j;
    cin >> x >> j;
    if (j == 0) {
      cout << x << '\n';
      continue;
    }
    if (x % 2 == 0) {
      if (j % 4 == 0) {
        cout << x << '\n';
      } else if (j % 4 == 1) {
        cout << x - j << '\n';
      } else if (j % 4 == 2) {
        cout << x + 1 << '\n';
      } else {
        cout << x + 1 + j << '\n';
      }
    } else {
      if (j % 4 == 0) {
        cout << x << '\n';
      } else if (j % 4 == 1) {
        cout << x + j << '\n';
      } else if (j % 4 == 2) {
        cout << x - 1 << '\n';
      } else {
        cout << x - 1 - j << '\n';
      }
    }
  }
}
