#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; 
    cin >> tt;
    while (tt--) {
        int n, x;
        cin >> n;
        
        map <int, int> mpp;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mpp[x]++;
        }
        vector <int> arr;
        int mn = INT_MAX;
        for(auto [key, value]: mpp){
            if(value == 1){
                arr.push_back(key);
            }
            else{
                sum += value/2 * key;
            }
        }
    }
    return 0;
}
