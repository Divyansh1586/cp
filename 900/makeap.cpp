#include <iostream>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    if ((2 * b - c) / a > 0 && (2 * b - c) % a == 0)
      flag = true;
    else if ((a + c) % (2 * b) == 0 && (a + c) / 2 * b > 0)
      flag = true;
    else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
      flag = true;
    flag ? cout << "YES\n" : cout << "NO\n";
  }
}
