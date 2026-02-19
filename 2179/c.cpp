#include <iostream>
using namespace std;

long long gcd(long long x, long long y) {
    if (y == 0) return x;
    return gcd(y, x % y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i =0 ; i <n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long ans = 0;
        for (int i = 1; i < n; i++) {
            ans = gcd(ans, arr[i] - arr[0]);
        }

        cout << max(ans, arr[0]) << '\n';
    }
    return 0;
}
