#include <iostream>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        long long int n;
        cin >> n;
        if (n % 2 == 1 || n < 4)
            cout << "-1\n";
        else {
            cout << (n + 5) / 6 << ' ' << n / 4 << '\n';
        }
    }
}
