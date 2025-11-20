#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--){
        int n, x;
        cin >> n;
        vector <int> arr(n);
        unordered_map <int, int> mpp;
        for(int i = 0; i < n; i++){
            cin >> x;
            mpp[x]++;
        }
        if(mpp.size() == n) {
            cout << 0 << '\n';
            continue;
        }
        long long sum = 0, mx = INT_MIN;
        for(auto i : mpp){
            if(i.second > 1){
                sum += i.first * i.second;
            }
        }
        for(auto i : mpp){
            if(i.second == 1 && sum < i.second){
                if(mx < i.first){
                    mx = i.first;
                }
            }
        }
        if(mx == INT_MIN) cout << "0\n";
        else cout << sum + mx << '\n';
        
    }
}