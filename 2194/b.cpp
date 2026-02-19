#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> arr, int ind, int n, int x, int y) {
  int l = 0, r = n - 1, diff = x - y;

  swap(arr[ind], arr[n - 1]);

  sort(arr.begin(), arr.end() - 1, greater<int>());
  while (l < r) {
    int fac = arr[l] / x;

    arr[r] += fac * (x - diff);
    // cout << fac << " " << x - diff << endl;
    swap(arr[l], arr[r]);
    r--;
  }

  return arr[l];
}

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int mx = 0;

    for (int i = 0; i < n; i++) {
      mx = max(mx, solve(arr, i, n, x, y));
    }

    cout << mx << '\n';
  }
}
