#include <iostream>
#include <vector>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      arr[i] = n - arr[i] + 1;
    }
    for (int i = 0; i < n; i++)
      cout << arr[i] << ' ';

    cout << '\n';
  }
}
