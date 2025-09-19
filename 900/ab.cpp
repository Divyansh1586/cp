#include <iostream>
#include <string>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    int n = s.size() - 1;
    if (s[0] != s[n])
      s[0] = s[n];
    cout << s << '\n';
  }
}
