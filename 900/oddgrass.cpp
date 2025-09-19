#include <iostream>
using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    long long x, j;
    cin >> x >> j;
    if (x % 2 == 0) {
      j % 2 ? cout << x - j / 2 : cout << x - (long long)(j + 1) / 2;
    } else {
      j % 2 != 0 ? cout << x - j / 2 : cout << x - (long long)(j + 1) / 2;
    }
  }
}
