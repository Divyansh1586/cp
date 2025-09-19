#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector <int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        int cnt = 1, mx = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] - arr[i-1] <= k) cnt++;
            else {
                cnt = 1;
            }
            mx = max(mx, cnt);
        }
        if(mx == 0) cout << mx << '\n';
        else cout << n - mx << '\n';

    }
}