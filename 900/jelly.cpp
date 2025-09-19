#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, n, x;
        cin >> a >> b >> n;
        long long int sum = b;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x >= a)
                sum += a - 1;
            else
                sum += x;
        }

        cout << sum << '\n';
    }
}