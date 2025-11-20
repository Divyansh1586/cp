#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; cin >> n;
        long long sum = 0;
        vector<long long> odds;
        for (int i = 0; i < n; ++i) {
            long long x; cin >> x;
            if (x % 2 == 0) sum += x;
            else odds.push_back(x);
        }
        int s = odds.size();
        if (s == 0) {
            cout << 0 << '\n';
            continue;
        }

        sort(odds.begin(), odds.end(), greater<long long>());
        int k = (s+1)/2;
        for (int i = 0; i < k; i++) sum += odds[i];
        cout << sum << '\n';
    }
    return 0;
}
