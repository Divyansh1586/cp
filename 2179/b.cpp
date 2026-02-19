#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long total = 0;
        for (int i = 0; i + 1 < n; i++) {
            total += abs(arr[i] - arr[i + 1]);
        }

        long long ans = total; 

        for (int k = 0; k < n; k++) {
            long long cur = total;

            if (k > 0) cur -= abs(arr[k] - arr[k - 1]);
            if (k + 1 < n) cur -= abs(arr[k] - arr[k + 1]);
            if (k > 0 && k + 1 < n) cur += abs(arr[k + 1] - arr[k - 1]);

            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }
    return 0;
}
