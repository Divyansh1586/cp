#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
void solve() {
    int n;
    cin >> n;
    unordered_set <int> pr;
    int f = 0;
    vector<int> z;

    for (int i = 0; i < n; ++i) {
        int p; cin >> p;
        if (p > 0) {
            pr.insert(p);
            if (p == i + 1) {
                f++;
            }
        } else {
            z.push_back(i + 1);
        }
    }

    if (z.size() == 1) {
        int zero_idx = z[0];
        
        int available_number = -1;
        for (int i = 1; i <= n; i++) {
            if (pr.find(i) == pr.end()) {
                available_number = i;
                break;
            }
        }
        
        if (available_number == zero_idx) {
            f++;
        }
    }

    cout << n - f << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
}