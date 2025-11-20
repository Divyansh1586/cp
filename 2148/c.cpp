#include <iostream>
#include <vector>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int i = 0; i < n; i++) {
            cin >> arr1[i] >> arr2[i];
        }

        int ans = 0;
        int prev = 0, prev_side = 0;

        for (int i = 0; i < n; i++) {
            int min = arr1[i] - prev;
            int need = abs(arr2[i] - prev_side);
            int sum = min - ((min - need) % 2);
            ans += sum;
            prev = arr1[i];
            prev_side = arr2[i];
        }

        int min = m - prev;
        ans += min;
        cout << ans << "\n";
    }
}
