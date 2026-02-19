#include <iostream>
using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n, w;
    cin >> n >> w;
    cout << n - n / w << '\n';
  }
}
